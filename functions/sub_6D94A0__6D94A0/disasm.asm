0x6D94A0: mov     eax, [ecx+1Ch]
0x6D94A3: sub     esp, 0Ch
0x6D94A6: test    eax, eax
0x6D94A8: push    esi
0x6D94A9: jz      loc_6D9589
0x6D94AF: mov     ecx, [eax+8]
0x6D94B2: test    ecx, ecx
0x6D94B4: mov     esi, [eax+10h]
0x6D94B7: mov     dl, [eax+14h]
0x6D94BA: mov     eax, [eax+0Ch]
0x6D94BD: jbe     loc_6D9589
0x6D94C3: cmp     esi, 4
0x6D94C6: jnz     loc_6D9568
0x6D94CC: fld     dword ptr ds:0A7DEB4h
0x6D94D2: push    ebx
0x6D94D3: fst     [esp+14h+var_8]
0x6D94D7: push    ebp
0x6D94D8: fchs
0x6D94DA: push    edi
0x6D94DB: fstp    [esp+1Ch+var_4]
0x6D94DF: lea     esi, [eax+2Ch]
0x6D94E2: lea     ecx, [eax+30h]
0x6D94E5: mov     ebp, 3
0x6D94EA: lea     ebx, [ebx+0]
0x6D94F0: mov     edx, [ecx]
0x6D94F2: fld     dword ptr [edx]
0x6D94F4: mov     edi, [ecx-1Ch]
0x6D94F7: mov     bl, [esi]
0x6D94F9: fstp    [esp+1Ch+var_C]
0x6D94FD: fld     [esp+1Ch+var_C]
0x6D9501: fld     [esp+1Ch+var_8]
0x6D9505: fcomp   st(1)
0x6D9507: fnstsw  ax
0x6D9509: test    ah, 41h
0x6D950C: jnz     short loc_6D9514
0x6D950E: fstp    [esp+1Ch+var_8]
0x6D9512: jmp     short loc_6D9516
0x6D9514: fstp    st
0x6D9516: movzx   eax, bl
0x6D9519: add     edi, 0FFFFFFFFh
0x6D951C: imul    edi, eax
0x6D951F: fld     dword ptr [edi+edx]
0x6D9522: fstp    [esp+1Ch+var_C]
0x6D9526: fld     [esp+1Ch+var_C]
0x6D952A: fld     [esp+1Ch+var_4]
0x6D952E: fcomp   st(1)
0x6D9530: fnstsw  ax
0x6D9532: test    ah, 5
0x6D9535: jp      short loc_6D953D
0x6D9537: fstp    [esp+1Ch+var_4]
0x6D953B: jmp     short loc_6D953F
0x6D953D: fstp    st
0x6D953F: add     ecx, 4
0x6D9542: add     esi, 1
0x6D9545: sub     ebp, 1
0x6D9548: jnz     short loc_6D94F0
0x6D954A: fld     [esp+1Ch+var_8]
0x6D954E: mov     ecx, [esp+1Ch+arg_0]
0x6D9552: mov     edx, [esp+1Ch+arg_4]
0x6D9556: fstp    dword ptr [ecx]
0x6D9558: fld     [esp+1Ch+var_4]
0x6D955C: pop     edi
0x6D955D: pop     ebp
0x6D955E: fstp    dword ptr [edx]
0x6D9560: pop     ebx
0x6D9561: pop     esi
0x6D9562: add     esp, 0Ch
0x6D9565: retn    8
0x6D9568: fld     dword ptr [eax]
0x6D956A: mov     esi, [esp+10h+arg_0]
0x6D956E: movzx   edx, dl
0x6D9571: fstp    dword ptr [esi]
0x6D9573: add     ecx, 0FFFFFFFFh
0x6D9576: imul    ecx, edx
0x6D9579: pop     esi
0x6D957A: fld     dword ptr [ecx+eax]
0x6D957D: mov     eax, [esp+0Ch+arg_4]
0x6D9581: fstp    dword ptr [eax]
0x6D9583: add     esp, 0Ch
0x6D9586: retn    8
0x6D9589: fldz
0x6D958B: mov     ecx, [esp+10h+arg_0]
0x6D958F: mov     edx, [esp+10h+arg_4]
0x6D9593: fst     dword ptr [ecx]
0x6D9595: fstp    dword ptr [edx]
0x6D9597: pop     esi
0x6D9598: add     esp, 0Ch
0x6D959B: retn    8
