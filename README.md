# nRF24-pi-arduino
Repository for testing communication between Raspberry pi and Arduino nano with NRF24L01 transceiver modules.


## nRF24 Acknowledgements (ACKs) 

[reddit post](https://www.reddit.com/r/arduino/comments/5cp2cz/a_couple_questions_about_autoack_with_nrfs_and/)

The radios support an automatic acknowledgement feature, enabled by default, in which the receiving radio switches into transmit mode after reception, and acknowledges reception of data.

A sends to B

B responds to A

A is now aware that B received the payload successfully