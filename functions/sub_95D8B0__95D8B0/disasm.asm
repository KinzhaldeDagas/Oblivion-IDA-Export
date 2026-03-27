0x95D8B0: mov     ecx, [esp+arg_0]
0x95D8B4: sub     esp, 3Ch
0x95D8B7: test    cx, cx
0x95D8BA: jz      short loc_95D917
0x95D8BC: mov     eax, [esp+3Ch+arg_4]
0x95D8C0: test    eax, eax
0x95D8C2: jz      short loc_95D917
0x95D8C4: push    eax
0x95D8C5: push    ecx
0x95D8C6: lea     ecx, [esp+44h+var_3C]
0x95D8CA: call    sub_96E980
0x95D8CF: push    40h ; '@'; Size
0x95D8D1: call    FormHeapAlloc
0x95D8D6: add     esp, 4
0x95D8D9: test    eax, eax
0x95D8DB: jz      short loc_95D8FF
0x95D8DD: push    offset dword_B258E8
0x95D8E2: push    offset dword_B258DC
0x95D8E7: push    offset dword_B258D0
0x95D8EC: push    offset Vector3_InitValue?
0x95D8F1: push    offset flt_B258F4
0x95D8F6: mov     ecx, eax
0x95D8F8: call    sub_961580
0x95D8FD: jmp     short loc_95D901
0x95D8FF: xor     eax, eax
0x95D901: push    esi
0x95D902: push    edi
0x95D903: lea     edi, [eax+4]
0x95D906: mov     ecx, 0Fh
0x95D90B: lea     esi, [esp+44h+var_3C]
0x95D90F: rep movsd
0x95D911: pop     edi
0x95D912: pop     esi
0x95D913: add     esp, 3Ch
0x95D916: retn
0x95D917: xor     eax, eax
0x95D919: add     esp, 3Ch
0x95D91C: retn
