0x6EBD50: push    0FFFFFFFFh
0x6EBD52: push    offset SEH_787830
0x6EBD57: mov     eax, large fs:0
0x6EBD5D: push    eax
0x6EBD5E: push    ebp
0x6EBD5F: push    esi
0x6EBD60: push    edi
0x6EBD61: mov     eax, ds:0B30AACh
0x6EBD66: xor     eax, esp
0x6EBD68: push    eax
0x6EBD69: lea     eax, [esp+1Ch+var_C]
0x6EBD6D: mov     large fs:0, eax
0x6EBD73: mov     ebp, ecx
0x6EBD75: mov     esi, [esp+1Ch+size]
0x6EBD79: xor     edi, edi
0x6EBD7B: cmp     esi, edi
0x6EBD7D: mov     [ebp+4], esi
0x6EBD80: mov     [ebp+8], edi
0x6EBD83: jbe     short loc_6EBDD0
0x6EBD85: xor     ecx, ecx
0x6EBD87: mov     eax, esi
0x6EBD89: mov     edx, 14h
0x6EBD8E: mul     edx
0x6EBD90: seto    cl
0x6EBD93: neg     ecx
0x6EBD95: or      ecx, eax
0x6EBD97: xor     eax, eax
0x6EBD99: add     ecx, 4
0x6EBD9C: setb    al
0x6EBD9F: neg     eax
0x6EBDA1: or      eax, ecx
0x6EBDA3: push    eax; Size
0x6EBDA4: call    FormHeapAlloc
0x6EBDA9: add     esp, 4
0x6EBDAC: mov     [esp+1Ch+size], eax
0x6EBDB0: cmp     eax, edi
0x6EBDB2: mov     [esp+1Ch+var_4], edi
0x6EBDB6: jz      short loc_6EBDD0
0x6EBDB8: push    offset sub_6EBB40; a5
0x6EBDBD: push    offset sub_6EBB10; a4
0x6EBDC2: push    esi; size
0x6EBDC3: lea     edi, [eax+4]
0x6EBDC6: push    14h; a2
0x6EBDC8: push    edi; a1
0x6EBDC9: mov     [eax], esi
0x6EBDCB: call    ArrayConstructor
0x6EBDD0: mov     eax, ebp
0x6EBDD2: mov     [ebp+0], edi
0x6EBDD5: mov     ecx, [esp+1Ch+var_C]
0x6EBDD9: mov     large fs:0, ecx
0x6EBDE0: pop     ecx
0x6EBDE1: pop     edi
0x6EBDE2: pop     esi
0x6EBDE3: pop     ebp
0x6EBDE4: add     esp, 0Ch
0x6EBDE7: retn    4
