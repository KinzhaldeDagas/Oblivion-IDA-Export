0x431800: sub     esp, 110h
0x431806: mov     eax, ___security_cookie
0x43180B: xor     eax, esp
0x43180D: mov     [esp+110h+var_4], eax
0x431814: push    ebx
0x431815: mov     bl, [esp+114h+arg_4]
0x43181C: test    bl, 1
0x43181F: push    ebp
0x431820: push    esi
0x431821: mov     esi, [esp+11Ch+arg_0]
0x431828: mov     ebp, ecx
0x43182A: mov     [esp+11Ch+Str1], esi
0x43182E: jnz     short loc_43184F
0x431830: mov     eax, [esp+11Ch+arg_8]
0x431837: push    eax; int
0x431838: push    esi; Str1
0x431839: call    ArchiveManager_IsFileInArchives?
0x43183E: add     esp, 8
0x431841: test    al, al
0x431843: jz      short loc_43184F
0x431845: mov     eax, 2
0x43184A: jmp     loc_431930
0x43184F: test    bl, 2
0x431852: jnz     short loc_43186E
0x431854: push    0; int
0x431856: push    esi; char *
0x431857: call    __access
0x43185C: add     esp, 8
0x43185F: cmp     eax, 0FFFFFFFFh
0x431862: jz      short loc_43186E
0x431864: mov     eax, 1
0x431869: jmp     loc_431930
0x43186E: test    bl, 4
0x431871: push    edi
0x431872: jnz     loc_43192D
0x431878: movzx   edi, word ptr [ebp+10h]
0x43187C: xor     ebx, ebx
0x43187E: test    edi, edi
0x431880: mov     [esp+120h+var_10C], edi
0x431884: jbe     loc_43192D
0x43188A: lea     ebx, [ebx+0]
0x431890: mov     ecx, [ebp+8]
0x431893: mov     edx, [ecx+ebx*4]
0x431896: mov     eax, edx
0x431898: lea     esi, [eax+1]
0x43189B: jmp     short loc_4318A0
0x43189D: align 10h
0x4318A0: mov     cl, [eax]
0x4318A2: add     eax, 1
0x4318A5: test    cl, cl
0x4318A7: jnz     short loc_4318A0
0x4318A9: sub     eax, esi
0x4318AB: mov     esi, [esp+120h+Str1]
0x4318AF: push    eax; MaxCount
0x4318B0: push    edx; Str2
0x4318B1: push    esi; Str1
0x4318B2: call    __strnicmp
0x4318B7: add     esp, 0Ch
0x4318BA: test    eax, eax
0x4318BC: jz      short loc_431922
0x4318BE: mov     edx, [ebp+8]
0x4318C1: mov     ecx, [edx+ebx*4]
0x4318C4: lea     edx, [esp+120h+var_108]
0x4318C8: mov     al, [ecx]
0x4318CA: mov     [edx], al
0x4318CC: add     ecx, 1
0x4318CF: add     edx, 1
0x4318D2: test    al, al
0x4318D4: jnz     short loc_4318C8
0x4318D6: mov     eax, esi
0x4318D8: mov     edx, esi
0x4318DA: lea     ebx, [ebx+0]
0x4318E0: mov     cl, [eax]
0x4318E2: add     eax, 1
0x4318E5: test    cl, cl
0x4318E7: jnz     short loc_4318E0
0x4318E9: lea     edi, [esp+120h+var_108]
0x4318ED: sub     eax, edx
0x4318EF: add     edi, 0FFFFFFFFh
0x4318F2: mov     cl, [edi+1]
0x4318F5: add     edi, 1
0x4318F8: test    cl, cl
0x4318FA: jnz     short loc_4318F2
0x4318FC: mov     ecx, eax
0x4318FE: shr     ecx, 2
0x431901: rep movsd
0x431903: mov     ecx, eax
0x431905: lea     eax, [esp+120h+var_108]
0x431909: and     ecx, 3
0x43190C: push    0; int
0x43190E: push    eax; char *
0x43190F: rep movsb
0x431911: call    __access
0x431916: add     esp, 8
0x431919: cmp     eax, 0FFFFFFFFh
0x43191C: jnz     short loc_43194A
0x43191E: mov     edi, [esp+120h+var_10C]
0x431922: add     ebx, 1
0x431925: cmp     ebx, edi
0x431927: jb      loc_431890
0x43192D: xor     eax, eax
0x43192F: pop     edi
0x431930: mov     ecx, [esp+11Ch+var_4]
0x431937: pop     esi
0x431938: pop     ebp
0x431939: pop     ebx
0x43193A: xor     ecx, esp
0x43193C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431941: add     esp, 110h
0x431947: retn    0Ch
0x43194A: mov     edx, [esp+120h+Str1]
0x43194E: lea     eax, [esp+120h+var_108]
0x431952: mov     ecx, eax
0x431954: sub     edx, ecx
0x431956: mov     cl, [eax]
0x431958: mov     [edx+eax], cl
0x43195B: add     eax, 1
0x43195E: test    cl, cl
0x431960: jnz     short loc_431956
0x431962: mov     eax, 1
0x431967: jmp     short loc_43192F
