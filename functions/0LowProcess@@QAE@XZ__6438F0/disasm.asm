0x6438F0: push    0FFFFFFFFh
0x6438F2: push    offset ??0LowProcess@@QAE@XZ_SEH
0x6438F7: mov     eax, large fs:0
0x6438FD: push    eax
0x6438FE: push    ecx
0x6438FF: push    ebx
0x643900: push    esi
0x643901: mov     eax, ds:0B30AACh
0x643906: xor     eax, esp
0x643908: push    eax
0x643909: lea     eax, [esp+1Ch+var_C]
0x64390D: mov     large fs:0, eax
0x643913: mov     esi, ecx
0x643915: mov     [esp+1Ch+var_10], esi
0x643919: call    sub_60CD90
0x64391E: xor     ebx, ebx
0x643920: mov     dword ptr [esi], offset ??_7LowProcess@@6B@; const LowProcess::`vftable'
0x643926: mov     [esi+3Ch], ebx
0x643929: mov     [esi+40h], ebx
0x64392C: mov     [esi+4Ch], ebx
0x64392F: mov     [esi+50h], ebx
0x643932: mov     [esi+54h], ebx
0x643935: mov     [esi+58h], ebx
0x643938: lea     ecx, [esi+70h]
0x64393B: mov     [esp+1Ch+var_4], ebx
0x64393F: mov     [esi+5Ch], ebx
0x643942: mov     [esi+60h], ebx
0x643945: call    AVCollection_Constr
0x64394A: fld     dword ptr ds:0A30634h
0x643950: fst     dword ptr [esi+14h]
0x643953: mov     [esi+8], ebx
0x643956: fstp    dword ptr [esi+0Ch]
0x643959: mov     [esi+34h], ebx
0x64395C: fldz
0x64395E: mov     [esi+4], ebx
0x643961: fst     dword ptr [esi+10h]
0x643964: mov     [esi+2Ch], ebx
0x643967: fst     dword ptr [esi+28h]
0x64396A: mov     [esi+18h], ebx
0x64396D: fstp    dword ptr [esi+8Ch]
0x643973: mov     [esi+1Ch], bl
0x643976: mov     [esi+1Dh], bl
0x643979: mov     [esi+44h], ebx
0x64397C: mov     [esi+48h], ebx
0x64397F: mov     [esi+30h], ebx
0x643982: mov     [esi+84h], bl
0x643988: mov     [esi+1Fh], bl
0x64398B: mov     [esi+20h], bl
0x64398E: mov     [esi+64h], ebx
0x643991: mov     [esi+68h], ebx
0x643994: mov     [esi+6Ch], ebx
0x643997: mov     [esi+24h], ebx
0x64399A: mov     [esi+38h], ebx
0x64399D: mov     [esi+1Eh], bl
0x6439A0: mov     eax, esi
0x6439A2: mov     ecx, [esp+1Ch+var_C]
0x6439A6: mov     large fs:0, ecx
0x6439AD: pop     ecx
0x6439AE: pop     esi
0x6439AF: pop     ebx
0x6439B0: add     esp, 10h
0x6439B3: retn
