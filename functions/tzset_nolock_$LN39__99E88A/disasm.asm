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
0x99E8F5: cmp     byte ptr [esi], 3Ah ; ':'
0x99E8F8: jnz     short loc_99E932
0x99E8FA: inc     esi
0x99E8FB: push    esi; Str
0x99E8FC: call    _atol
0x99E901: pop     ecx
0x99E902: imul    eax, 3Ch ; '<'
0x99E905: add     [ebp-1Ch], eax
0x99E908: jmp     short loc_99E90F
0x99E90A: cmp     al, 39h ; '9'
0x99E90C: jg      short loc_99E915
0x99E90E: inc     esi
0x99E90F: mov     al, [esi]
0x99E911: cmp     al, 30h ; '0'
0x99E913: jge     short loc_99E90A
0x99E915: cmp     byte ptr [esi], 3Ah ; ':'
0x99E918: jnz     short loc_99E932
0x99E91A: inc     esi
0x99E91B: push    esi; Str
0x99E91C: call    _atol
0x99E921: pop     ecx
0x99E922: add     [ebp-1Ch], eax
0x99E925: jmp     short loc_99E92C
0x99E927: cmp     al, 39h ; '9'
0x99E929: jg      short loc_99E932
0x99E92B: inc     esi
0x99E92C: mov     al, [esi]
0x99E92E: cmp     al, 30h ; '0'
0x99E930: jge     short loc_99E927
0x99E932: cmp     [ebp-38h], ebx
0x99E935: jz      short loc_99E93A
0x99E937: neg     dword ptr [ebp-1Ch]
0x99E93A: movsx   eax, byte ptr [esi]
0x99E93D: mov     [ebp-24h], eax
0x99E940: cmp     eax, ebx
0x99E942: jz      short loc_99E967
0x99E944: push    3; Src
0x99E946: push    esi; Src
0x99E947: push    40h ; '@'; SizeInBytes
0x99E949: push    dword ptr [edi+4]; Dst
0x99E94C: call    _strncpy_s
0x99E951: add     esp, 10h
0x99E954: test    eax, eax
0x99E956: jz      short loc_99E96C
0x99E958: push    ebx
0x99E959: push    ebx
0x99E95A: push    ebx
0x99E95B: push    ebx
0x99E95C: push    ebx
0x99E95D: call    __invoke_watson
0x99E967: mov     eax, [edi+4]
0x99E96A: mov     [eax], bl
0x99E96C: mov     esi, [ebp-1Ch]
0x99E96F: call    sub_99EE57
0x99E974: mov     [eax], esi
0x99E976: call    __SEH_epilog4
0x99E97B: retn
