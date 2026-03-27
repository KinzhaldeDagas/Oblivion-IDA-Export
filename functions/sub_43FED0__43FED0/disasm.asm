0x43FED0: push    ebx
0x43FED1: mov     ebx, [esp+4+a1]
0x43FED5: mov     al, [ebx+26h]
0x43FED8: cmp     al, 6
0x43FEDA: push    esi
0x43FEDB: push    edi
0x43FEDC: mov     edi, ecx
0x43FEDE: jz      short loc_43FEE8
0x43FEE0: cmp     al, 5
0x43FEE2: jz      short loc_43FEE8
0x43FEE4: xor     al, al
0x43FEE6: jmp     short loc_43FEEA
0x43FEE8: mov     al, 1
0x43FEEA: mov     edx, ds:0B06A2Ch
0x43FEF0: mov     ecx, [edi+3Ch]
0x43FEF3: imul    edx, edx
0x43FEF6: cmp     dword ptr [ecx+edx*4-4], 0
0x43FEFB: jnz     short loc_43FEFF
0x43FEFD: mov     al, 1
0x43FEFF: test    al, al
0x43FF01: mov     esi, ebx
0x43FF03: jnz     short loc_43FF0D
0x43FF05: cmp     edx, ds:0B051DCh
0x43FF0B: jb      short loc_43FF18
0x43FF0D: xor     edx, edx
0x43FF0F: nop
0x43FF10: cmp     edx, ds:0B051DCh
0x43FF16: jnb     short loc_43FF2E
0x43FF18: mov     eax, [edi+3Ch]
0x43FF1B: mov     ecx, [eax+edx*4]
0x43FF1E: cmp     ecx, ebx
0x43FF20: lea     eax, [eax+edx*4]
0x43FF23: mov     [eax], esi
0x43FF25: jz      short loc_43FF71
0x43FF27: mov     esi, ecx
0x43FF29: add     edx, 1
0x43FF2C: jmp     short loc_43FF10
0x43FF2E: test    esi, esi
0x43FF30: jz      short loc_43FF71
0x43FF32: mov     ecx, esi; this
0x43FF34: call    TESObjectCELL_GetNiNode?
0x43FF39: test    eax, eax
0x43FF3B: jz      short loc_43FF44
0x43FF3D: mov     ecx, esi; this
0x43FF3F: call    TESObjectCELL_GetNiNode?
0x43FF44: mov     ecx, ds:0B051DCh
0x43FF4A: xor     eax, eax
0x43FF4C: lea     esp, [esp+0]
0x43FF50: cmp     eax, ecx
0x43FF52: jnb     short loc_43FF61
0x43FF54: mov     edx, [edi+3Ch]
0x43FF57: cmp     [edx+eax*4], esi
0x43FF5A: jz      short loc_43FF61
0x43FF5C: add     eax, 1
0x43FF5F: jmp     short loc_43FF50
0x43FF61: mov     ecx, ds:0B33A98h
0x43FF67: push    esi; a1
0x43FF68: call    sub_447BA0
0x43FF6D: mov     byte ptr [edi+69h], 1
0x43FF71: pop     edi
0x43FF72: pop     esi
0x43FF73: pop     ebx
0x43FF74: retn    4
