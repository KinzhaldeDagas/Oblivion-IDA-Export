0x7F16F0: push    esi
0x7F16F1: mov     esi, [esp+4+arg_0]
0x7F16F5: mov     eax, [esi]
0x7F16F7: mov     edx, [eax+18h]
0x7F16FA: push    edi
0x7F16FB: mov     edi, [esp+8+arg_4]
0x7F16FF: push    0
0x7F1701: push    offset flt_B467A0
0x7F1706: push    4
0x7F1708: push    10h
0x7F170A: push    offset EmptyString
0x7F170F: push    1
0x7F1711: push    edi
0x7F1712: push    0
0x7F1714: push    10000007h
0x7F1719: push    offset aTreedata; "TreeData"
0x7F171E: mov     ecx, esi
0x7F1720: call    edx
0x7F1722: mov     eax, [esi]
0x7F1724: mov     edx, [eax+18h]
0x7F1727: push    0
0x7F1729: push    offset WindMatrixes
0x7F172E: push    4
0x7F1730: push    100h
0x7F1735: push    offset EmptyString
0x7F173A: push    10h
0x7F173C: add     edi, 1
0x7F173F: push    edi
0x7F1740: push    0
0x7F1742: push    10000009h
0x7F1747: push    offset aWindmatrices; "WindMatrices"
0x7F174C: mov     ecx, esi
0x7F174E: call    edx
0x7F1750: pop     edi
0x7F1751: pop     esi
0x7F1752: retn
