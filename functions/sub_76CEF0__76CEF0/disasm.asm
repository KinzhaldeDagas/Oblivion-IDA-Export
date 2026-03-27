0x76CEF0: push    esi
0x76CEF1: mov     esi, ecx
0x76CEF3: cmp     dword ptr [esi+3Ch], 0
0x76CEF7: jz      loc_76CF90
0x76CEFD: cmp     byte ptr [esi+50h], 0
0x76CF01: jz      short loc_76CF65
0x76CF03: mov     ecx, [esp+4+arg_0]
0x76CF07: test    ecx, ecx
0x76CF09: jz      short loc_76CF65
0x76CF0B: movzx   eax, byte ptr [ecx+4]
0x76CF0F: movzx   edx, ax
0x76CF12: cmp     edx, [esi+54h]
0x76CF15: jbe     short loc_76CF1B
0x76CF17: movzx   eax, word ptr [esi+54h]
0x76CF1B: movzx   eax, ax
0x76CF1E: push    edi
0x76CF1F: push    eax
0x76CF20: push    ecx
0x76CF21: mov     ecx, esi
0x76CF23: call    sub_76CA10
0x76CF28: mov     edi, eax
0x76CF2A: test    edi, edi
0x76CF2C: jz      short loc_76CF64
0x76CF2E: mov     ecx, [edi+0Ch]
0x76CF31: push    0
0x76CF33: push    3
0x76CF35: push    1
0x76CF37: call    sub_772FF0
0x76CF3C: cmp     byte ptr [esi+50h], 0
0x76CF40: mov     ecx, [edi+0Ch]
0x76CF43: push    0
0x76CF45: jz      short loc_76CF5B
0x76CF47: push    4
0x76CF49: push    4
0x76CF4B: call    sub_772FF0
0x76CF50: mov     ecx, [edi+0Ch]
0x76CF53: push    0
0x76CF55: push    0
0x76CF57: push    6
0x76CF59: jmp     short loc_76CF5F
0x76CF5B: push    2
0x76CF5D: push    4
0x76CF5F: call    sub_772FF0
0x76CF64: pop     edi
0x76CF65: mov     ecx, [esi+3Ch]
0x76CF68: test    ecx, ecx
0x76CF6A: jz      short loc_76CF7E
0x76CF6C: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CF70: jnz     short loc_76CF77
0x76CF72: call    sub_7604D0
0x76CF77: mov     dword ptr [esi+3Ch], 0
0x76CF7E: add     dword ptr [esi+38h], 1
0x76CF82: mov     dword ptr [esi+58h], 0
0x76CF89: mov     dword ptr [esi+5Ch], 0
0x76CF90: pop     esi
0x76CF91: retn    4
