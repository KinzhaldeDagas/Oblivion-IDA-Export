0x4D6700: cmp     dword ptr ds:0B35E50h, 0
0x4D6707: jz      short loc_4D6755
0x4D6709: mov     eax, [ecx]
0x4D670B: mov     edx, [eax+170h]
0x4D6711: call    edx
0x4D6713: push    eax
0x4D6714: call    GetFormModelPAth
0x4D6719: add     esp, 4
0x4D671C: test    eax, eax
0x4D671E: jz      short loc_4D6755
0x4D6720: cmp     byte ptr [eax], 0
0x4D6723: jz      short loc_4D6755
0x4D6725: mov     ecx, ds:0B33A1Ch
0x4D672B: push    eax
0x4D672C: call    ModelLoader_IsModelLoaded??
0x4D6731: test    eax, eax
0x4D6733: jz      short loc_4D6755
0x4D6735: mov     ecx, offset dword_B35E50
0x4D673A: lea     ebx, [ebx+0]
0x4D6740: mov     edx, [ecx]
0x4D6742: test    edx, edx
0x4D6744: jz      short loc_4D6755
0x4D6746: cmp     edx, eax
0x4D6748: jz      short loc_4D6758
0x4D674A: add     ecx, 4
0x4D674D: cmp     ecx, offset TESDataHandler_g_DoorMarker
0x4D6753: jl      short loc_4D6740
0x4D6755: xor     al, al
0x4D6757: retn
0x4D6758: mov     al, 1
0x4D675A: retn
