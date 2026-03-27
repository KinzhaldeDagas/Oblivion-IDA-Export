0x51C490: sub     esp, 10Ch
0x51C496: mov     eax, ds:0B30AACh
0x51C49B: xor     eax, esp
0x51C49D: mov     [esp+10Ch+var_4], eax
0x51C4A4: push    ebx
0x51C4A5: push    esi
0x51C4A6: mov     esi, ecx
0x51C4A8: mov     ecx, ds:0B33B00h
0x51C4AE: push    34h ; '4'; Size
0x51C4B0: lea     eax, [esi+38h]
0x51C4B3: push    eax; Dst
0x51C4B4: call    SaveLoad_LoadData
0x51C4B9: push    1; Size
0x51C4BB: lea     ecx, [esp+118h+Dst]
0x51C4BF: push    ecx; Dst
0x51C4C0: mov     ecx, ds:0B33B00h
0x51C4C6: call    SaveLoad_LoadData
0x51C4CB: mov     bl, [esp+114h+Dst]
0x51C4CF: test    bl, bl
0x51C4D1: jz      short loc_51C50A
0x51C4D3: push    104h
0x51C4D8: lea     edx, [esp+118h+a2]
0x51C4DC: push    0
0x51C4DE: push    edx
0x51C4DF: call    __memset
0x51C4E4: movzx   eax, bl
0x51C4E7: add     esp, 0Ch
0x51C4EA: push    eax; Size
0x51C4EB: lea     ecx, [esp+118h+a2]
0x51C4EF: push    ecx; Dst
0x51C4F0: mov     ecx, ds:0B33B00h
0x51C4F6: call    SaveLoad_LoadData
0x51C4FB: push    0; a3
0x51C4FD: lea     edx, [esp+118h+a2]
0x51C501: push    edx; a2
0x51C502: lea     ecx, [esi+1Ch]; this
0x51C505: call    BSStringT_Set
0x51C50A: mov     ecx, ds:0B33B00h
0x51C510: push    1; Size
0x51C512: lea     eax, [esp+118h+Dst]
0x51C516: push    eax; Dst
0x51C517: call    SaveLoad_LoadData
0x51C51C: mov     bl, [esp+114h+Dst]
0x51C520: test    bl, bl
0x51C522: jz      short loc_51C55B
0x51C524: push    104h
0x51C529: lea     ecx, [esp+118h+a2]
0x51C52D: push    0
0x51C52F: push    ecx
0x51C530: call    __memset
0x51C535: mov     ecx, ds:0B33B00h
0x51C53B: movzx   edx, bl
0x51C53E: add     esp, 0Ch
0x51C541: push    edx; Size
0x51C542: lea     eax, [esp+118h+a2]
0x51C546: push    eax; Dst
0x51C547: call    SaveLoad_LoadData
0x51C54C: push    0; a3
0x51C54E: lea     ecx, [esp+118h+a2]
0x51C552: push    ecx; a2
0x51C553: lea     ecx, [esi+30h]; this
0x51C556: call    BSStringT_Set
0x51C55B: mov     ecx, [esp+114h+var_4]
0x51C562: pop     esi
0x51C563: pop     ebx
0x51C564: xor     ecx, esp
0x51C566: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51C56B: add     esp, 10Ch
0x51C571: retn
