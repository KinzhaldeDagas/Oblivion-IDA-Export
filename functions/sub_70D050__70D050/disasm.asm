0x70D050: mov     eax, [esp+arg_4]
0x70D054: push    ebx
0x70D055: push    ebp
0x70D056: mov     ebp, [esp+8+arg_0]
0x70D05A: push    esi
0x70D05B: push    edi
0x70D05C: push    eax
0x70D05D: push    ebp
0x70D05E: mov     ebx, ecx
0x70D060: call    sub_707E90
0x70D065: push    40h ; '@'; Size
0x70D067: lea     ecx, [ebx+0ACh]
0x70D06D: push    ecx; Src
0x70D06E: lea     edx, [ebp+0ACh]
0x70D074: push    edx; Dst
0x70D075: call    _memcpy
0x70D07A: mov     eax, [ebx+88h]
0x70D080: mov     [ebp+88h], eax
0x70D086: mov     ecx, [ebx+8Ch]
0x70D08C: mov     [ebp+8Ch], ecx
0x70D092: mov     edx, [ebx+90h]
0x70D098: mov     [ebp+90h], edx
0x70D09E: lea     esi, [ebx+0ECh]
0x70D0A4: lea     edi, [ebp+0ECh]
0x70D0AA: mov     ecx, 7
0x70D0AF: rep movsd
0x70D0B1: mov     eax, [ebx+110h]
0x70D0B7: mov     [ebp+110h], eax
0x70D0BD: mov     ecx, [ebx+114h]
0x70D0C3: mov     [ebp+114h], ecx
0x70D0C9: mov     edx, [ebx+118h]
0x70D0CF: mov     [ebp+118h], edx
0x70D0D5: mov     eax, [ebx+11Ch]
0x70D0DB: mov     [ebp+11Ch], eax
0x70D0E1: add     esp, 0Ch
0x70D0E4: fld     dword ptr [ebx+120h]
0x70D0EA: pop     edi
0x70D0EB: fstp    dword ptr [ebp+120h]
0x70D0F1: pop     esi
0x70D0F2: fld     dword ptr [ebx+108h]
0x70D0F8: fstp    dword ptr [ebp+108h]
0x70D0FE: fld     dword ptr [ebx+10Ch]
0x70D104: fstp    dword ptr [ebp+10Ch]
0x70D10A: pop     ebp
0x70D10B: pop     ebx
0x70D10C: retn    8
