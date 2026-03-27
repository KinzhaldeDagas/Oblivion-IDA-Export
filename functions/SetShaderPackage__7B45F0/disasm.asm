0x7B45F0: mov     eax, [esp+arg_0]
0x7B45F4: cmp     ah, 2
0x7B45F7: mov     ecx, [esp+arg_4]
0x7B45FB: push    esi
0x7B45FC: jb      loc_7B46AE
0x7B4602: cmp     ch, 2
0x7B4605: jb      loc_7B46AE
0x7B460B: cmp     [esp+4+arg_C], 0
0x7B4610: mov     edx, 2
0x7B4615: mov     ds:0B42F48h, edx
0x7B461B: mov     dword ptr ds:0B42F40h, 2Fh ; '/'
0x7B4625: jz      short loc_7B468E
0x7B4627: mov     esi, [esp+4+Str1]
0x7B462B: test    esi, esi
0x7B462D: jz      short loc_7B468E
0x7B462F: push    3; MaxCount
0x7B4631: push    offset byte_A3E274; Str2
0x7B4636: push    esi; Str1
0x7B4637: call    __strnicmp
0x7B463C: add     esp, 0Ch
0x7B463F: test    eax, eax
0x7B4641: jnz     loc_7B4702
0x7B4647: mov     eax, [esp+4+arg_14]
0x7B464B: cmp     eax, 60h ; '`'
0x7B464E: mov     edx, ds:0B42F48h
0x7B4654: jle     loc_7B46E6
0x7B465A: cmp     edx, 2
0x7B465D: jnz     short loc_7B466A
0x7B465F: mov     edx, 6
0x7B4664: mov     ds:0B42F48h, edx
0x7B466A: mov     dword ptr ds:0B42D74h, 6
0x7B4674: cmp     eax, 0FFh
0x7B4679: jle     short loc_7B4682
0x7B467B: mov     byte ptr ds:0B42EA5h, 1
0x7B4682: cmp     edx, 2
0x7B4685: jge     short loc_7B468E
0x7B4687: and     dword ptr ds:0B42F40h, 0FFFFFFEFh
0x7B468E: push    edx
0x7B468F: call    sub_7B4590
0x7B4694: add     esp, 4
0x7B4697: cmp     [esp+4+arg_8], 0
0x7B469C: pop     esi
0x7B469D: jz      short locret_7B46AD
0x7B469F: test    edx, edx
0x7B46A1: jz      short locret_7B46AD
0x7B46A3: mov     dword ptr ds:0B42F48h, 1
0x7B46AD: retn
0x7B46AE: cmp     ah, 1
0x7B46B1: jb      short loc_7B46D6
0x7B46B3: cmp     ch, 1
0x7B46B6: jb      short loc_7B46D6
0x7B46B8: mov     edx, 1
0x7B46BD: mov     ds:0B42F48h, edx
0x7B46C3: mov     byte ptr ds:0B43070h, 0
0x7B46CA: mov     dword ptr ds:0B42F40h, 0Fh
0x7B46D4: jmp     short loc_7B4687
0x7B46D6: xor     edx, edx
0x7B46D8: mov     ds:0B42F48h, edx
0x7B46DE: mov     ds:0B43070h, dl
0x7B46E4: jmp     short loc_7B4687
0x7B46E6: cmp     edx, 2
0x7B46E9: jnz     short loc_7B46F6
0x7B46EB: mov     edx, 4
0x7B46F0: mov     ds:0B42F48h, edx
0x7B46F6: mov     dword ptr ds:0B42D74h, 6
0x7B4700: jmp     short loc_7B4682
0x7B4702: push    2; MaxCount
0x7B4704: push    offset aNv; "nv"
0x7B4709: push    esi; Str1
0x7B470A: call    __strnicmp
0x7B470F: add     esp, 0Ch
0x7B4712: test    eax, eax
0x7B4714: jnz     short loc_7B4763
0x7B4716: mov     eax, [esp+4+arg_14]
0x7B471A: cmp     eax, 60h ; '`'
0x7B471D: mov     edx, ds:0B42F48h
0x7B4723: jle     short loc_7B4744
0x7B4725: cmp     edx, 2
0x7B4728: jnz     short loc_7B4735
0x7B472A: mov     edx, 5
0x7B472F: mov     ds:0B42F48h, edx
0x7B4735: mov     dword ptr ds:0B42D74h, 5
0x7B473F: jmp     loc_7B4674
0x7B4744: cmp     edx, 2
0x7B4747: jnz     short loc_7B4754
0x7B4749: mov     edx, 3
0x7B474E: mov     ds:0B42F48h, edx
0x7B4754: mov     dword ptr ds:0B42D74h, 5
0x7B475E: jmp     loc_7B4682
0x7B4763: mov     edx, 2
0x7B4768: mov     ds:0B42F48h, edx
0x7B476E: mov     ds:0B42D74h, edx
0x7B4774: jmp     loc_7B468E
