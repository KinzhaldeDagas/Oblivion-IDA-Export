0x6D0010: push    0FFFFFFFFh
0x6D0012: push    offset SEH_8094D0
0x6D0017: mov     eax, large fs:0
0x6D001D: push    eax
0x6D001E: push    ebx
0x6D001F: push    ebp
0x6D0020: push    esi
0x6D0021: push    edi
0x6D0022: mov     eax, ds:0B30AACh
0x6D0027: xor     eax, esp
0x6D0029: push    eax
0x6D002A: lea     eax, [esp+20h+var_C]
0x6D002E: mov     large fs:0, eax
0x6D0034: mov     ebp, ecx
0x6D0036: mov     bx, word ptr [esp+20h+arg_0]
0x6D003B: test    bx, bx
0x6D003E: mov     [ebp+44h], bx
0x6D0042: jz      loc_6D00F4
0x6D0048: movzx   edi, bx
0x6D004B: xor     ecx, ecx
0x6D004D: mov     eax, edi
0x6D004F: mov     edx, 30h ; '0'
0x6D0054: mul     edx
0x6D0056: seto    cl
0x6D0059: neg     ecx
0x6D005B: or      ecx, eax
0x6D005D: xor     eax, eax
0x6D005F: add     ecx, 4
0x6D0062: setb    al
0x6D0065: neg     eax
0x6D0067: or      eax, ecx
0x6D0069: push    eax; Size
0x6D006A: call    FormHeapAlloc
0x6D006F: add     esp, 4
0x6D0072: mov     [esp+20h+arg_0], eax
0x6D0076: xor     esi, esi
0x6D0078: cmp     eax, esi
0x6D007A: mov     [esp+20h+var_4], esi
0x6D007E: jz      short loc_6D0098
0x6D0080: push    offset j_??1NiBlendBoolInterpolator@@UAE@XZ; a5
0x6D0085: push    offset sub_6CBCB0; a4
0x6D008A: push    edi; size
0x6D008B: lea     esi, [eax+4]
0x6D008E: push    30h ; '0'; a2
0x6D0090: push    esi; a1
0x6D0091: mov     [eax], edi
0x6D0093: call    ArrayConstructor
0x6D0098: test    bx, bx
0x6D009B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D00A3: mov     [ebp+3Ch], esi
0x6D00A6: jbe     short loc_6D00C6
0x6D00A8: xor     esi, esi
0x6D00AA: mov     ebx, edi
0x6D00AC: lea     esp, [esp+0]
0x6D00B0: mov     ecx, [ebp+3Ch]
0x6D00B3: lea     edx, [ecx+esi+4]
0x6D00B7: push    edx; lpAddend
0x6D00B8: call    dword ptr ds:0A28078h
0x6D00BE: add     esi, 30h ; '0'
0x6D00C1: sub     ebx, 1
0x6D00C4: jnz     short loc_6D00B0
0x6D00C6: xor     ecx, ecx
0x6D00C8: mov     eax, edi
0x6D00CA: mov     edx, 4
0x6D00CF: mul     edx
0x6D00D1: seto    cl
0x6D00D4: neg     ecx
0x6D00D6: or      ecx, eax
0x6D00D8: push    ecx; Size
0x6D00D9: call    FormHeapAlloc
0x6D00DE: lea     ecx, ds:0[edi*4]
0x6D00E5: push    ecx
0x6D00E6: push    0
0x6D00E8: push    eax
0x6D00E9: mov     [ebp+40h], eax
0x6D00EC: call    __memset
0x6D00F1: add     esp, 10h
0x6D00F4: mov     ecx, [esp+20h+var_C]
0x6D00F8: mov     large fs:0, ecx
0x6D00FF: pop     ecx
0x6D0100: pop     edi
0x6D0101: pop     esi
0x6D0102: pop     ebp
0x6D0103: pop     ebx
0x6D0104: add     esp, 0Ch
0x6D0107: retn    4
