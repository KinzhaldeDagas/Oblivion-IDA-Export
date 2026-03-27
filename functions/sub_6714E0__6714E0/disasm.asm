0x6714E0: push    ebp
0x6714E1: mov     ebp, esp
0x6714E3: and     esp, 0FFFFFFF8h
0x6714E6: sub     esp, 10h
0x6714E9: cmp     byte ptr ds:0B14F58h, 0
0x6714F0: push    ebx
0x6714F1: push    ebp
0x6714F2: push    esi
0x6714F3: push    edi
0x6714F4: mov     edi, ecx
0x6714F6: jz      loc_6715AF
0x6714FC: mov     eax, ds:0B333A0h
0x671501: cmp     byte ptr [eax+51h], 0
0x671505: jnz     loc_6715AF
0x67150B: cmp     byte ptr [eax+52h], 0
0x67150F: jnz     loc_6715AF
0x671515: xor     bl, bl
0x671517: cmp     [edi+71Eh], bl
0x67151D: jnz     loc_6715A8
0x671523: cmp     dword ptr [edi+730h], 0
0x67152A: jz      loc_6715D3
0x671530: mov     ecx, [edi+0D4h]
0x671536: test    ecx, ecx
0x671538: mov     eax, edi
0x67153A: jz      short loc_67153E
0x67153C: mov     eax, ecx
0x67153E: add     eax, 2Ch ; ','
0x671541: push    eax
0x671542: lea     ecx, [esp+24h+var_8]
0x671546: call    sub_4A6950
0x67154B: mov     eax, [edi+730h]
0x671551: movzx   esi, word ptr [eax+0Ah]
0x671555: xor     ebp, ebp
0x671557: test    esi, esi
0x671559: mov     [esp+20h+var_C], esi
0x67155D: jbe     loc_6715E7
0x671563: mov     ecx, [edi+730h]
0x671569: mov     edx, [ecx+4]
0x67156C: mov     eax, [edx+ebp*4]
0x67156F: mov     ecx, [eax+8]
0x671572: shr     ecx, 5
0x671575: test    cl, 1
0x671578: jnz     short loc_6715BB
0x67157A: mov     esi, [eax+1Ch]
0x67157D: lea     ecx, [ecx+0]
0x671580: test    esi, esi
0x671582: jz      short loc_6715B7
0x671584: cmp     dword ptr [esi+4], 0
0x671588: jnz     short loc_67158F
0x67158A: cmp     dword ptr [esi], 0
0x67158D: jz      short loc_6715B7
0x67158F: mov     ecx, [esi]
0x671591: lea     edx, [esp+20h+var_8]
0x671595: push    edx
0x671596: call    sub_4A7330
0x67159B: test    al, al
0x67159D: jz      short loc_6715A1
0x67159F: mov     bl, 1
0x6715A1: test    bl, bl
0x6715A3: mov     esi, [esi+4]
0x6715A6: jz      short loc_671580
0x6715A8: mov     ecx, edi
0x6715AA: call    sub_664320
0x6715AF: pop     edi
0x6715B0: pop     esi
0x6715B1: pop     ebp
0x6715B2: pop     ebx
0x6715B3: mov     esp, ebp
0x6715B5: pop     ebp
0x6715B6: retn
0x6715B7: mov     esi, [esp+20h+var_C]
0x6715BB: add     ebp, 1
0x6715BE: cmp     ebp, esi
0x6715C0: jb      short loc_671563
0x6715C2: push    0; float
0x6715C4: mov     ecx, edi; this
0x6715C6: call    sub_66FF10
0x6715CB: pop     edi
0x6715CC: pop     esi
0x6715CD: pop     ebp
0x6715CE: pop     ebx
0x6715CF: mov     esp, ebp
0x6715D1: pop     ebp
0x6715D2: retn
0x6715D3: call    TESObjectREFR_GetWorldSpace
0x6715D8: test    eax, eax
0x6715DA: jz      short loc_6715A8
0x6715DC: mov     ecx, eax
0x6715DE: call    sub_4EF160
0x6715E3: test    al, al
0x6715E5: jz      short loc_6715A8
0x6715E7: push    0; float
0x6715E9: mov     ecx, edi; int
0x6715EB: call    sub_66FF10
0x6715F0: pop     edi
0x6715F1: pop     esi
0x6715F2: pop     ebp
0x6715F3: pop     ebx
0x6715F4: mov     esp, ebp
0x6715F6: pop     ebp
0x6715F7: retn
