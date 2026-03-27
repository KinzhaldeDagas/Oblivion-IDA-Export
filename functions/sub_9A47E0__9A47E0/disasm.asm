0x9A47E0: sub     esp, 108h
0x9A47E6: mov     eax, ___security_cookie
0x9A47EB: xor     eax, esp
0x9A47ED: mov     [esp+108h+var_4], eax
0x9A47F4: mov     ecx, [esp+108h+arg_8]
0x9A47FB: mov     eax, [esp+108h+Src]
0x9A4802: push    ebx
0x9A4803: mov     ebx, [esp+10Ch+arg_4]
0x9A480A: push    ecx; int
0x9A480B: push    104h; SizeInBytes
0x9A4810: lea     ecx, [esp+114h+Str1]
0x9A4814: push    ecx; char *
0x9A4815: push    eax; Src
0x9A4816: call    sub_9A2480
0x9A481B: add     esp, 10h
0x9A481E: test    al, al
0x9A4820: jnz     short loc_9A4838
0x9A4822: pop     ebx
0x9A4823: mov     ecx, [esp+108h+var_4]
0x9A482A: xor     ecx, esp
0x9A482C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A4831: add     esp, 108h
0x9A4837: retn
0x9A4838: push    esi
0x9A4839: xor     esi, esi
0x9A483B: cmp     dword_B32584, esi
0x9A4841: push    edi
0x9A4842: jbe     short loc_9A4873
0x9A4844: mov     edi, offset unk_B32590
0x9A4849: lea     esp, [esp+0]
0x9A4850: mov     edx, [edi+4]
0x9A4853: push    edx; Str2
0x9A4854: lea     eax, [esp+118h+Str1]
0x9A4858: push    eax; Str1
0x9A4859: call    __strcmp
0x9A485E: add     esp, 8
0x9A4861: test    eax, eax
0x9A4863: jz      short loc_9A488D
0x9A4865: add     esi, 1
0x9A4868: add     edi, 8
0x9A486B: cmp     esi, dword_B32584
0x9A4871: jb      short loc_9A4850
0x9A4873: pop     edi
0x9A4874: pop     esi
0x9A4875: xor     al, al
0x9A4877: pop     ebx
0x9A4878: mov     ecx, [esp+108h+var_4]
0x9A487F: xor     ecx, esp
0x9A4881: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A4886: add     esp, 108h
0x9A488C: retn
0x9A488D: mov     ecx, [edi]
0x9A488F: pop     edi
0x9A4890: mov     [ebx], ecx
0x9A4892: mov     ecx, [esp+110h+var_4]
0x9A4899: pop     esi
0x9A489A: pop     ebx
0x9A489B: xor     ecx, esp
0x9A489D: mov     al, 1
0x9A489F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A48A4: add     esp, 108h
0x9A48AA: retn
