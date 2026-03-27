0x6D1750: push    0FFFFFFFFh
0x6D1752: push    offset ??0NiGeomMorpherController@@QAE@XZ_SEH
0x6D1757: mov     eax, large fs:0
0x6D175D: push    eax
0x6D175E: push    ecx
0x6D175F: push    ebx
0x6D1760: push    esi
0x6D1761: push    edi
0x6D1762: mov     eax, ds:0B30AACh
0x6D1767: xor     eax, esp
0x6D1769: push    eax
0x6D176A: lea     eax, [esp+20h+var_C]
0x6D176E: mov     large fs:0, eax
0x6D1774: mov     edi, ecx
0x6D1776: push    5Ch ; '\'; Size
0x6D1778: call    FormHeapAlloc
0x6D177D: mov     esi, eax
0x6D177F: add     esp, 4
0x6D1782: mov     [esp+20h+var_10], esi
0x6D1786: xor     ebx, ebx
0x6D1788: cmp     esi, ebx
0x6D178A: mov     [esp+20h+var_4], ebx
0x6D178E: jz      short loc_6D17D1
0x6D1790: mov     ecx, esi
0x6D1792: call    sub_6D04E0
0x6D1797: mov     dword ptr [esi], offset ??_7NiGeomMorpherController@@6B@; const NiGeomMorpherController::`vftable'
0x6D179D: mov     dword ptr [esi+40h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x6D17A4: mov     [esi+48h], bx
0x6D17A8: mov     word ptr [esi+4Eh], 1
0x6D17AE: mov     [esi+4Ah], bx
0x6D17B2: mov     [esi+4Ch], bx
0x6D17B6: mov     [esi+44h], ebx
0x6D17B9: mov     [esi+50h], ebx
0x6D17BC: mov     [esi+54h], ebx
0x6D17BF: mov     [esi+3Ch], bx
0x6D17C3: mov     [esi+58h], bl
0x6D17C6: mov     [esi+59h], bl
0x6D17C9: mov     [esi+5Ah], bl
0x6D17CC: mov     [esi+5Bh], bl
0x6D17CF: jmp     short loc_6D17D3
0x6D17D1: xor     esi, esi
0x6D17D3: mov     eax, [esp+20h+arg_0]
0x6D17D7: push    eax
0x6D17D8: push    esi
0x6D17D9: mov     ecx, edi
0x6D17DB: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D17E3: call    sub_6D1480
0x6D17E8: mov     eax, esi
0x6D17EA: mov     ecx, [esp+20h+var_C]
0x6D17EE: mov     large fs:0, ecx
0x6D17F5: pop     ecx
0x6D17F6: pop     edi
0x6D17F7: pop     esi
0x6D17F8: pop     ebx
0x6D17F9: add     esp, 10h
0x6D17FC: retn    4
