0x99E88A: cmp     [ebp-2Ch], ebx
0x99E88D: jnz     loc_99E976
0x99E893: push    3; Src
0x99E895: push    esi; Src
0x99E896: push    40h ; '@'; SizeInBytes
0x99E898: mov     edi, [ebp-20h]
0x99E89B: push    dword ptr [edi]; Dst
0x99E89D: call    _strncpy_s
0x99E8A2: add     esp, 10h
0x99E8A5: test    eax, eax
0x99E8A7: jz      short loc_99E8B6
0x99E8A9: push    ebx
0x99E8AA: push    ebx
0x99E8AB: push    ebx
0x99E8AC: push    ebx
0x99E8AD: push    ebx
0x99E8AE: call    __invoke_watson
0x99E8B3: add     esp, 14h
0x99E8B6: add     esi, 3
0x99E8B9: cmp     byte ptr [esi], 2Dh ; '-'
0x99E8BC: jnz     short loc_99E8C6
0x99E8BE: mov     dword ptr [ebp-38h], 1
0x99E8C5: inc     esi
0x99E8C6: push    esi; Str
0x99E8C7: call    _atol
0x99E8CC: pop     ecx
0x99E8CD: imul    eax, 0E10h
0x99E8D3: mov     [ebp-1Ch], eax
0x99E8D6: mov     al, [esi]
0x99E8D8: cmp     al, 2Bh ; '+'
0x99E8DA: jz      short loc_99E8E4
0x99E8DC: cmp     al, 30h ; '0'
0x99E8DE: jl      short loc_99E8F5
0x99E8E0: cmp     al, 39h ; '9'
0x99E8E2: jg      short loc_99E8F5
0x99E8E4: inc     esi
0x99E8E5: jmp     short loc_99E8D6
