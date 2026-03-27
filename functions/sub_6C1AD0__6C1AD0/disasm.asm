0x6C1AD0: push    0FFFFFFFFh
0x6C1AD2: push    offset SEH_6CF490
0x6C1AD7: mov     eax, large fs:0
0x6C1ADD: push    eax
0x6C1ADE: push    ebx
0x6C1ADF: push    ebp
0x6C1AE0: push    esi
0x6C1AE1: push    edi
0x6C1AE2: mov     eax, ds:0B30AACh
0x6C1AE7: xor     eax, esp
0x6C1AE9: push    eax
0x6C1AEA: lea     eax, [esp+20h+var_C]
0x6C1AEE: mov     large fs:0, eax
0x6C1AF4: mov     edi, [esp+20h+size]
0x6C1AF8: xor     ecx, ecx
0x6C1AFA: mov     eax, edi
0x6C1AFC: mov     edx, 1Ch
0x6C1B01: mul     edx
0x6C1B03: seto    cl
0x6C1B06: neg     ecx
0x6C1B08: or      ecx, eax
0x6C1B0A: xor     eax, eax
0x6C1B0C: add     ecx, 4
0x6C1B0F: setb    al
0x6C1B12: neg     eax
0x6C1B14: or      eax, ecx
0x6C1B16: push    eax; Size
0x6C1B17: call    FormHeapAlloc
0x6C1B1C: add     esp, 4
0x6C1B1F: mov     [esp+20h+size], eax
0x6C1B23: test    eax, eax
0x6C1B25: mov     [esp+20h+var_4], 0
0x6C1B2D: jz      short loc_6C1B4B
0x6C1B2F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C1B34: push    offset sub_7616D0; a4
0x6C1B39: push    edi; size
0x6C1B3A: lea     esi, [eax+4]
0x6C1B3D: push    1Ch; a2
0x6C1B3F: push    esi; a1
0x6C1B40: mov     [eax], edi
0x6C1B42: call    ArrayConstructor
0x6C1B47: mov     ebp, esi
0x6C1B49: jmp     short loc_6C1B4D
0x6C1B4B: xor     ebp, ebp
0x6C1B4D: test    edi, edi
0x6C1B4F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C1B57: jbe     short loc_6C1B70
0x6C1B59: mov     ebx, [esp+20h+arg_0]
0x6C1B5D: mov     esi, ebp
0x6C1B5F: nop
0x6C1B60: push    ebx
0x6C1B61: mov     ecx, esi
0x6C1B63: call    sub_6C19D0
0x6C1B68: add     esi, 1Ch
0x6C1B6B: sub     edi, 1
0x6C1B6E: jnz     short loc_6C1B60
0x6C1B70: mov     eax, ebp
0x6C1B72: mov     ecx, [esp+20h+var_C]
0x6C1B76: mov     large fs:0, ecx
0x6C1B7D: pop     ecx
0x6C1B7E: pop     edi
0x6C1B7F: pop     esi
0x6C1B80: pop     ebp
0x6C1B81: pop     ebx
0x6C1B82: add     esp, 0Ch
0x6C1B85: retn
