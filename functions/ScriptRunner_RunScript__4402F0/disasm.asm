0x4402F0: cmp     byte ptr ds:0B33A58h, 0
0x4402F7: push    ebp
0x4402F8: mov     ebp, ecx
0x4402FA: jnz     loc_4403B3
0x440300: call    sub_4F9FA0
0x440305: test    al, al
0x440307: jz      loc_4403B3
0x44030D: push    esi
0x44030E: mov     esi, ds:0B33A98h
0x440314: add     esi, 84h ; '„'
0x44031A: push    edi
0x44031B: mov     byte ptr ds:0B33A58h, 1
0x440322: jz      short loc_44033C
0x440324: mov     ecx, [esi]
0x440326: test    ecx, ecx
0x440328: mov     esi, [esi+4]
0x44032B: jz      short loc_440338
0x44032D: test    byte ptr [ecx+3Ch], 1
0x440331: jz      short loc_440338
0x440333: call    sub_529AA0
0x440338: test    esi, esi
0x44033A: jnz     short loc_440324
0x44033C: mov     ecx, [ebp+34h]
0x44033F: test    ecx, ecx
0x440341: jz      short loc_4403B5
0x440343: push    0
0x440345: push    0
0x440347: call    sub_4CB8C0
0x44034C: mov     esi, [ebp+88h]
0x440352: test    esi, esi
0x440354: jz      short loc_4403A5
0x440356: mov     dword ptr [ebp+88h], 0
0x440360: mov     edi, esi
0x440362: mov     ecx, [edi]
0x440364: test    ecx, ecx
0x440366: jz      short loc_44036D
0x440368: call    RunScripts
0x44036D: mov     edi, [edi+4]
0x440370: test    edi, edi
0x440372: jnz     short loc_440362
0x440374: cmp     [esi+4], edi
0x440377: jz      short loc_440396
0x440379: lea     esp, [esp+0]
0x440380: mov     eax, [esi+4]
0x440383: mov     edi, [eax+4]
0x440386: push    eax
0x440387: call    FormHeapFree
0x44038C: add     esp, 4
0x44038F: test    edi, edi
0x440391: mov     [esi+4], edi
0x440394: jnz     short loc_440380
0x440396: push    esi
0x440397: mov     dword ptr [esi], 0
0x44039D: call    FormHeapFree
0x4403A2: add     esp, 4
0x4403A5: call    sub_4FA580
0x4403AA: pop     edi
0x4403AB: mov     byte ptr ds:0B33A58h, 0
0x4403B2: pop     esi
0x4403B3: pop     ebp
0x4403B4: retn
0x4403B5: mov     eax, ds:0B06A2Ch
0x4403BA: xor     edi, edi
0x4403BC: lea     esp, [esp+0]
0x4403C0: cmp     edi, eax
0x4403C2: jnb     short loc_44034C
0x4403C4: xor     esi, esi
0x4403C6: cmp     esi, eax
0x4403C8: jnb     short loc_4403FB
0x4403CA: mov     ecx, [ebp+8]
0x4403CD: push    esi
0x4403CE: push    edi
0x4403CF: call    GetGridEntry
0x4403D4: mov     ecx, [eax]
0x4403D6: test    ecx, ecx
0x4403D8: jz      short loc_4403F1
0x4403DA: cmp     byte ptr [ecx+26h], 6
0x4403DE: jnz     short loc_4403F1
0x4403E0: push    0
0x4403E2: push    0
0x4403E4: call    sub_4CB8C0
0x4403E9: test    al, al
0x4403EB: jnz     loc_44034C
0x4403F1: mov     eax, ds:0B06A2Ch
0x4403F6: add     esi, 1
0x4403F9: jmp     short loc_4403C6
0x4403FB: add     edi, 1
0x4403FE: jmp     short loc_4403C0
