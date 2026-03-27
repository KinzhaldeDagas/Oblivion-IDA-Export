0x4351E0: push    esi
0x4351E1: mov     esi, ecx
0x4351E3: mov     eax, [esi+3Ch]
0x4351E6: test    eax, eax
0x4351E8: jz      short loc_435216
0x4351EA: mov     ecx, [esi+38h]
0x4351ED: mov     ecx, [ecx+1Ch]
0x4351F0: mov     edx, [ecx]
0x4351F2: push    1
0x4351F4: push    eax
0x4351F5: mov     eax, [edx+84h]
0x4351FB: call    eax
0x4351FD: fldz
0x4351FF: push    0; a3
0x435201: push    ecx
0x435202: mov     ecx, [esi+3Ch]; this
0x435205: fstp    [esp+0Ch+a2]; a2
0x435208: call    NiAVObject_UpdateNiAVObject
0x43520D: mov     ecx, [esi+3Ch]
0x435210: pop     esi
0x435211: jmp     NiAVObject_InitializePropertyState
0x435216: pop     esi
0x435217: retn
