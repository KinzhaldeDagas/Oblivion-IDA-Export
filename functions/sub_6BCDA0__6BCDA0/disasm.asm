0x6BCDA0: push    0FFFFFFFFh
0x6BCDA2: push    offset SEH_6CF490
0x6BCDA7: mov     eax, large fs:0
0x6BCDAD: push    eax
0x6BCDAE: push    ebx
0x6BCDAF: push    ebp
0x6BCDB0: push    esi
0x6BCDB1: push    edi
0x6BCDB2: mov     eax, ds:0B30AACh
0x6BCDB7: xor     eax, esp
0x6BCDB9: push    eax
0x6BCDBA: lea     eax, [esp+20h+var_C]
0x6BCDBE: mov     large fs:0, eax
0x6BCDC4: mov     edi, [esp+20h+size]
0x6BCDC8: xor     ecx, ecx
0x6BCDCA: mov     eax, edi
0x6BCDCC: mov     edx, 40h ; '@'
0x6BCDD1: mul     edx
0x6BCDD3: seto    cl
0x6BCDD6: neg     ecx
0x6BCDD8: or      ecx, eax
0x6BCDDA: xor     eax, eax
0x6BCDDC: add     ecx, 4
0x6BCDDF: setb    al
0x6BCDE2: neg     eax
0x6BCDE4: or      eax, ecx
0x6BCDE6: push    eax; Size
0x6BCDE7: call    FormHeapAlloc
0x6BCDEC: add     esp, 4
0x6BCDEF: mov     [esp+20h+size], eax
0x6BCDF3: test    eax, eax
0x6BCDF5: mov     [esp+20h+var_4], 0
0x6BCDFD: jz      short loc_6BCE1B
0x6BCDFF: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BCE04: push    offset sub_7616D0; a4
0x6BCE09: push    edi; size
0x6BCE0A: lea     esi, [eax+4]
0x6BCE0D: push    40h ; '@'; a2
0x6BCE0F: push    esi; a1
0x6BCE10: mov     [eax], edi
0x6BCE12: call    ArrayConstructor
0x6BCE17: mov     ebp, esi
0x6BCE19: jmp     short loc_6BCE1D
0x6BCE1B: xor     ebp, ebp
0x6BCE1D: test    edi, edi
0x6BCE1F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6BCE27: jbe     short loc_6BCE54
0x6BCE29: mov     ebx, edi
0x6BCE2B: mov     edi, [esp+20h+arg_0]
0x6BCE2F: lea     esi, [ebp+1Ch]
0x6BCE32: push    edi
0x6BCE33: lea     ecx, [esi-1Ch]
0x6BCE36: call    sub_6BC1C0
0x6BCE3B: push    edi
0x6BCE3C: lea     ecx, [esi-0Ch]
0x6BCE3F: call    sub_709430
0x6BCE44: push    edi
0x6BCE45: mov     ecx, esi
0x6BCE47: call    sub_709430
0x6BCE4C: add     esi, 40h ; '@'
0x6BCE4F: sub     ebx, 1
0x6BCE52: jnz     short loc_6BCE32
0x6BCE54: mov     eax, ebp
0x6BCE56: mov     ecx, [esp+20h+var_C]
0x6BCE5A: mov     large fs:0, ecx
0x6BCE61: pop     ecx
0x6BCE62: pop     edi
0x6BCE63: pop     esi
0x6BCE64: pop     ebp
0x6BCE65: pop     ebx
0x6BCE66: add     esp, 0Ch
0x6BCE69: retn
