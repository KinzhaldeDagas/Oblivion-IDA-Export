0x6C1740: push    0FFFFFFFFh
0x6C1742: push    offset SEH_6E3250
0x6C1747: mov     eax, large fs:0
0x6C174D: push    eax
0x6C174E: push    esi
0x6C174F: push    edi
0x6C1750: mov     eax, ds:0B30AACh
0x6C1755: xor     eax, esp
0x6C1757: push    eax
0x6C1758: lea     eax, [esp+18h+var_C]
0x6C175C: mov     large fs:0, eax
0x6C1762: mov     edi, [esp+18h+size]
0x6C1766: xor     ecx, ecx
0x6C1768: mov     eax, edi
0x6C176A: mov     edx, 1Ch
0x6C176F: mul     edx
0x6C1771: seto    cl
0x6C1774: neg     ecx
0x6C1776: or      ecx, eax
0x6C1778: xor     eax, eax
0x6C177A: add     ecx, 4
0x6C177D: setb    al
0x6C1780: neg     eax
0x6C1782: or      eax, ecx
0x6C1784: push    eax; Size
0x6C1785: call    FormHeapAlloc
0x6C178A: add     esp, 4
0x6C178D: mov     [esp+18h+size], eax
0x6C1791: test    eax, eax
0x6C1793: mov     [esp+18h+var_4], 0
0x6C179B: jz      short loc_6C17C9
0x6C179D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C17A2: push    offset sub_7616D0; a4
0x6C17A7: push    edi; size
0x6C17A8: lea     esi, [eax+4]
0x6C17AB: push    1Ch; a2
0x6C17AD: push    esi; a1
0x6C17AE: mov     [eax], edi
0x6C17B0: call    ArrayConstructor
0x6C17B5: mov     eax, esi
0x6C17B7: mov     ecx, [esp+18h+var_C]
0x6C17BB: mov     large fs:0, ecx
0x6C17C2: pop     ecx
0x6C17C3: pop     edi
0x6C17C4: pop     esi
0x6C17C5: add     esp, 0Ch
0x6C17C8: retn
0x6C17C9: xor     eax, eax
0x6C17CB: mov     ecx, [esp+18h+var_C]
0x6C17CF: mov     large fs:0, ecx
0x6C17D6: pop     ecx
0x6C17D7: pop     edi
0x6C17D8: pop     esi
0x6C17D9: add     esp, 0Ch
0x6C17DC: retn
