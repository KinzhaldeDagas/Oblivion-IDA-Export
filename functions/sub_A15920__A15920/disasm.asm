0xA15920: push    0
0xA15922: push    0Ah
0xA15924: push    offset off_AA2458; "magic"
0xA15929: push    0
0xA1592B: push    0
0xA1592D: push    0
0xA1592F: push    0
0xA15931: push    40h ; '@'
0xA15933: push    0
0xA15935: push    offset aHkpackfilehead; "hkPackfileHeader"
0xA1593A: mov     ecx, offset unk_BA9474
0xA1593F: call    sub_90D190
0xA15944: retn
