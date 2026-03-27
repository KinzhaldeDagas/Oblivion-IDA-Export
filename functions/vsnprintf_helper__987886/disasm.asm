0x987886: push    ebp
0x987887: mov     ebp, esp
0x987889: sub     esp, 20h
0x98788C: push    ebx
0x98788D: xor     ebx, ebx
0x98788F: cmp     [ebp+arg_C], ebx
0x987892: jnz     short loc_9878B4
0x987894: call    __errno
0x987899: push    ebx
0x98789A: push    ebx
0x98789B: push    ebx
0x98789C: push    ebx
0x98789D: push    ebx
0x98789E: mov     dword ptr [eax], 16h
0x9878A4: call    __invalid_parameter
0x9878A9: add     esp, 14h
0x9878AC: or      eax, 0FFFFFFFFh
0x9878AF: jmp     loc_98794D
0x9878B4: push    esi
0x9878B5: mov     esi, [ebp+arg_4]
0x9878B8: push    edi
0x9878B9: mov     edi, [ebp+arg_8]
0x9878BC: cmp     edi, ebx
0x9878BE: jz      short loc_9878E1
0x9878C0: cmp     esi, ebx
0x9878C2: jnz     short loc_9878E1
0x9878C4: call    __errno
0x9878C9: push    ebx
0x9878CA: push    ebx
0x9878CB: push    ebx
0x9878CC: push    ebx
0x9878CD: push    ebx
0x9878CE: mov     dword ptr [eax], 16h
0x9878D4: call    __invalid_parameter
0x9878D9: add     esp, 14h
0x9878DC: or      eax, 0FFFFFFFFh
0x9878DF: jmp     short loc_98794B
0x9878E1: mov     eax, 7FFFFFFFh
0x9878E6: cmp     edi, eax
0x9878E8: mov     [ebp+File._cnt], eax
0x9878EB: ja      short loc_9878F0
0x9878ED: mov     [ebp+File._cnt], edi
0x9878F0: push    [ebp+arg_14]
0x9878F3: lea     eax, [ebp+File]
0x9878F6: push    [ebp+arg_10]
0x9878F9: mov     [ebp+File._flag], 42h ; 'B'
0x987900: push    [ebp+arg_C]
0x987903: mov     [ebp+File._base], esi
0x987906: push    eax
0x987907: mov     [ebp+File._ptr], esi
0x98790A: call    [ebp+arg_0]
0x98790D: add     esp, 10h
0x987910: cmp     esi, ebx
0x987912: mov     [ebp+arg_C], eax
0x987915: jz      short loc_98794B
0x987917: cmp     eax, ebx
0x987919: jl      short loc_98793D
0x98791B: dec     [ebp+File._cnt]
0x98791E: js      short loc_987927
0x987920: mov     eax, [ebp+File._ptr]
0x987923: mov     [eax], bl
0x987925: jmp     short loc_987938
0x987927: lea     eax, [ebp+File]
0x98792A: push    eax; File
0x98792B: push    ebx; Ch
0x98792C: call    __flsbuf
0x987931: cmp     eax, 0FFFFFFFFh
0x987934: pop     ecx
0x987935: pop     ecx
0x987936: jz      short loc_98793D
0x987938: mov     eax, [ebp+arg_C]
0x98793B: jmp     short loc_98794B
0x98793D: xor     eax, eax
0x98793F: cmp     [ebp+File._cnt], ebx
0x987942: mov     [esi+edi-1], bl
0x987946: setnl   al
0x987949: dec     eax
0x98794A: dec     eax
0x98794B: pop     edi
0x98794C: pop     esi
0x98794D: pop     ebx
0x98794E: leave
0x98794F: retn
