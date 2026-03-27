0x6E4240: sub     esp, 10h
0x6E4243: push    esi
0x6E4244: mov     esi, ecx
0x6E4246: mov     al, [esi+8]
0x6E4249: shr     al, 5
0x6E424C: test    al, 1
0x6E424E: jz      short loc_6E425B
0x6E4250: fld     dword ptr ds:0A7A164h
0x6E4256: fstp    dword ptr [esi+28h]
0x6E4259: jmp     short loc_6E4281
0x6E425B: fld     [esp+14h+arg_0]
0x6E425F: push    ecx
0x6E4260: fstp    [esp+18h+var_18]; float
0x6E4263: call    sub_6C36B0
0x6E4268: test    al, al
0x6E426A: jz      short loc_6E4281
0x6E426C: mov     ecx, [esi+3Ch]
0x6E426F: test    ecx, ecx
0x6E4271: jz      short loc_6E42E1
0x6E4273: mov     edx, [ecx]
0x6E4275: mov     eax, [edx+94h]
0x6E427B: call    eax
0x6E427D: test    al, al
0x6E427F: jz      short loc_6E42E1
0x6E4281: mov     ecx, [esi+3Ch]
0x6E4284: test    ecx, ecx
0x6E4286: jz      short loc_6E42E1
0x6E4288: fldz
0x6E428A: lea     eax, [esp+14h+var_10]
0x6E428E: fst     [esp+14h+var_10]
0x6E4292: push    eax
0x6E4293: mov     eax, [esi+30h]
0x6E4296: fst     [esp+18h+var_C]
0x6E429A: fst     [esp+18h+var_8]
0x6E429E: push    eax
0x6E429F: fstp    [esp+1Ch+var_4]
0x6E42A3: push    ecx
0x6E42A4: mov     edx, [ecx]
0x6E42A6: fld     dword ptr [esi+28h]
0x6E42A9: mov     edx, [edx+50h]
0x6E42AC: fstp    [esp+20h+var_20]
0x6E42AF: call    edx
0x6E42B1: test    al, al
0x6E42B3: jz      short loc_6E42E1
0x6E42B5: mov     ecx, [esi+44h]
0x6E42B8: test    ecx, ecx
0x6E42BA: jz      short loc_6E42E1
0x6E42BC: mov     edx, [esp+14h+var_10]
0x6E42C0: sub     esp, 10h
0x6E42C3: mov     eax, esp
0x6E42C5: mov     [eax], edx
0x6E42C7: mov     edx, [esp+24h+var_C]
0x6E42CB: mov     [eax+4], edx
0x6E42CE: mov     edx, [esp+24h+var_8]
0x6E42D2: mov     [eax+8], edx
0x6E42D5: mov     edx, [esp+24h+var_4]
0x6E42D9: mov     [eax+0Ch], edx
0x6E42DC: call    sub_730540
0x6E42E1: pop     esi
0x6E42E2: add     esp, 10h
0x6E42E5: retn    4
