0x430010: push    esi
0x430011: mov     esi, ecx
0x430013: cmp     dword ptr [esi+150h], 0
0x43001A: jnz     short loc_430023
0x43001C: mov     eax, [esi]
0x43001E: mov     edx, [eax+1Ch]
0x430021: call    edx
0x430023: mov     eax, [esi+150h]
0x430029: pop     esi
0x43002A: retn
