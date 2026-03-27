0x634910: push    0FFFFFFFFh
0x634912: push    offset SEH_7E5B50
0x634917: mov     eax, large fs:0
0x63491D: push    eax
0x63491E: push    ebx
0x63491F: push    ebp
0x634920: push    esi
0x634921: push    edi
0x634922: mov     eax, ds:0B30AACh
0x634927: xor     eax, esp
0x634929: push    eax
0x63492A: lea     eax, [esp+20h+var_C]
0x63492E: mov     large fs:0, eax
0x634934: mov     ebx, ecx
0x634936: mov     esi, [ebx+118h]
0x63493C: mov     edi, [esp+20h+arg_0]
0x634940: cmp     esi, edi
0x634942: mov     ebp, ds:0A2807Ch
0x634948: mov     [esp+20h+var_4], 0
0x634950: jz      short loc_634982
0x634952: test    esi, esi
0x634954: jz      short loc_63496E
0x634956: lea     eax, [esi+4]
0x634959: push    eax; lpAddend
0x63495A: call    ebp ; InterlockedDecrement
0x63495C: test    eax, eax
0x63495E: jnz     short loc_63496E
0x634960: test    esi, esi
0x634962: jz      short loc_63496E
0x634964: mov     edx, [esi]
0x634966: mov     eax, [edx]
0x634968: push    1
0x63496A: mov     ecx, esi
0x63496C: call    eax
0x63496E: test    edi, edi
0x634970: mov     [ebx+118h], edi
0x634976: jz      short loc_634982
0x634978: lea     ecx, [edi+4]
0x63497B: push    ecx; lpAddend
0x63497C: call    dword ptr ds:0A28078h
0x634982: test    edi, edi
0x634984: mov     [esp+20h+var_4], 0FFFFFFFFh
0x63498C: jz      short loc_6349A2
0x63498E: lea     edx, [edi+4]
0x634991: push    edx; lpAddend
0x634992: call    ebp ; InterlockedDecrement
0x634994: test    eax, eax
0x634996: jnz     short loc_6349A2
0x634998: mov     eax, [edi]
0x63499A: mov     edx, [eax]
0x63499C: push    1
0x63499E: mov     ecx, edi
0x6349A0: call    edx
0x6349A2: mov     ecx, dword ptr [esp+20h+var_C]
0x6349A6: mov     large fs:0, ecx
0x6349AD: pop     ecx
0x6349AE: pop     edi
0x6349AF: pop     esi
0x6349B0: pop     ebp
0x6349B1: pop     ebx
0x6349B2: add     esp, 0Ch
0x6349B5: retn    4
