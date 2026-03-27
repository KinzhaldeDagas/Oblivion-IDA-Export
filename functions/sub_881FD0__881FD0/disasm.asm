0x881FD0: push    0FFFFFFFFh
0x881FD2: push    offset SEH_882120
0x881FD7: mov     eax, large fs:0
0x881FDD: push    eax
0x881FDE: push    ebx
0x881FDF: push    ebp
0x881FE0: push    esi
0x881FE1: push    edi
0x881FE2: mov     eax, ds:0B30AACh
0x881FE7: xor     eax, esp
0x881FE9: push    eax
0x881FEA: lea     eax, [esp+20h+var_C]
0x881FEE: mov     large fs:0, eax
0x881FF4: mov     esi, ecx
0x881FF6: mov     ebx, [esp+20h+arg_8]
0x881FFA: mov     eax, [ebx+10h]
0x881FFD: mov     edi, ds:0B4775Ch
0x882003: push    eax
0x882004: call    sub_848C40
0x882009: mov     ebx, [ebx+0Ch]
0x88200C: push    ebx
0x88200D: mov     ecx, esi
0x88200F: call    sub_848E50
0x882014: mov     ecx, [esp+20h+arg_0]
0x882018: mov     eax, [esi]
0x88201A: mov     edx, [eax+0BCh]
0x882020: push    0
0x882022: push    ebx
0x882023: push    ecx
0x882024: mov     ecx, esi
0x882026: call    edx
0x882028: mov     eax, [edi+24h]
0x88202B: mov     ecx, [esp+20h+arg_C]
0x88202F: mov     ebx, [eax]
0x882031: push    0
0x882033: push    ecx
0x882034: mov     ecx, esi
0x882036: mov     [esp+28h+arg_8], ebx
0x88203A: call    sub_848FD0
0x88203F: mov     ebx, [ebx+4]
0x882042: mov     ebp, eax
0x882044: cmp     ebx, ebp
0x882046: jz      short loc_88207D
0x882048: test    ebx, ebx
0x88204A: jz      short loc_882068
0x88204C: lea     edx, [ebx+4]
0x88204F: push    edx; lpAddend
0x882050: call    dword ptr ds:0A2807Ch
0x882056: test    eax, eax
0x882058: jnz     short loc_882068
0x88205A: test    ebx, ebx
0x88205C: jz      short loc_882068
0x88205E: mov     eax, [ebx]
0x882060: mov     edx, [eax]
0x882062: push    1
0x882064: mov     ecx, ebx
0x882066: call    edx
0x882068: test    ebp, ebp
0x88206A: mov     eax, [esp+20h+arg_8]
0x88206E: mov     [eax+4], ebp
0x882071: jz      short loc_88207D
0x882073: add     ebp, 4
0x882076: push    ebp; lpAddend
0x882077: call    dword ptr ds:0A28078h
0x88207D: mov     ecx, [edi+24h]
0x882080: mov     ebp, [ecx+0Ch]
0x882083: mov     eax, ds:0B43110h
0x882088: mov     ebx, [ebp+4]
0x88208B: cmp     ebx, eax
0x88208D: mov     ecx, eax
0x88208F: mov     [esp+20h+arg_8], ecx
0x882093: jz      short loc_8820CA
0x882095: test    ebx, ebx
0x882097: jz      short loc_8820B9
0x882099: lea     edx, [ebx+4]
0x88209C: push    edx; lpAddend
0x88209D: call    dword ptr ds:0A2807Ch
0x8820A3: test    eax, eax
0x8820A5: jnz     short loc_8820B5
0x8820A7: test    ebx, ebx
0x8820A9: jz      short loc_8820B5
0x8820AB: mov     eax, [ebx]
0x8820AD: mov     edx, [eax]
0x8820AF: push    1
0x8820B1: mov     ecx, ebx
0x8820B3: call    edx
0x8820B5: mov     ecx, [esp+20h+arg_8]
0x8820B9: test    ecx, ecx
0x8820BB: mov     [ebp+4], ecx
0x8820BE: jz      short loc_8820CA
0x8820C0: add     ecx, 4
0x8820C3: push    ecx; lpAddend
0x8820C4: call    dword ptr ds:0A28078h
0x8820CA: mov     ebx, 1
0x8820CF: add     [edi+60h], ebx
0x8820D2: mov     [esp+20h+arg_8], edi
0x8820D6: mov     ecx, [esi+38h]
0x8820D9: lea     eax, [esp+20h+arg_8]
0x8820DD: push    eax
0x8820DE: push    ecx
0x8820DF: lea     ecx, [esi+40h]
0x8820E2: mov     [esp+28h+var_4], 0
0x8820EA: call    sub_76CE40
0x8820EF: or      eax, 0FFFFFFFFh
0x8820F2: add     [edi+60h], eax
0x8820F5: mov     [esp+20h+var_4], eax
0x8820F9: jnz     short loc_882102
0x8820FB: mov     ecx, edi
0x8820FD: call    sub_7604D0
0x882102: add     [esi+38h], ebx
0x882105: mov     ecx, dword ptr [esp+20h+var_C]
0x882109: mov     large fs:0, ecx
0x882110: pop     ecx
0x882111: pop     edi
0x882112: pop     esi
0x882113: pop     ebp
0x882114: pop     ebx
0x882115: add     esp, 0Ch
0x882118: retn    10h
