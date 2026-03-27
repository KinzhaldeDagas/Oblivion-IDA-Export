0x534310: mov     ecx, ds:0BA7D98h
0x534316: mov     eax, [ecx]
0x534318: mov     edx, [eax+10h]
0x53431B: push    17h
0x53431D: push    10h
0x53431F: call    edx
0x534321: mov     ecx, 1
0x534326: mov     word ptr [eax+4], 10h
0x53432C: mov     [eax+6], cx
0x534330: mov     dword ptr [eax], offset ??_7HavokFileStreambufReader@@6B@; const HavokFileStreambufReader::`vftable'
0x534336: mov     [eax+0Ch], cl
0x534339: retn    4
