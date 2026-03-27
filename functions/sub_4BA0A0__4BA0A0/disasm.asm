0x4BA0A0: push    edi
0x4BA0A1: mov     edi, ecx
0x4BA0A3: call    TESForm_InitializeFormRecord
0x4BA0A8: push    54444F4Dh
0x4BA0AD: push    42444F4Dh
0x4BA0B2: push    4C444F4Dh
0x4BA0B7: lea     ecx, [edi+24h]
0x4BA0BA: call    TESModel_Save
0x4BA0BF: push    4E4F4349h
0x4BA0C4: lea     ecx, [edi+3Ch]
0x4BA0C7: call    TESTexture_Save
0x4BA0CC: movzx   eax, word ptr [edi+52h]
0x4BA0D0: test    ax, ax
0x4BA0D3: jbe     short loc_4BA136
0x4BA0D5: push    ebx
0x4BA0D6: push    ebp
0x4BA0D7: push    esi
0x4BA0D8: movzx   esi, ax
0x4BA0DB: xor     ecx, ecx
0x4BA0DD: mov     eax, esi
0x4BA0DF: mov     edx, 4
0x4BA0E4: mul     edx
0x4BA0E6: seto    cl
0x4BA0E9: lea     ebp, ds:0[esi*4]
0x4BA0F0: neg     ecx
0x4BA0F2: or      ecx, eax
0x4BA0F4: push    ecx; Size
0x4BA0F5: call    FormHeapAlloc
0x4BA0FA: push    ebp
0x4BA0FB: mov     ebx, eax
0x4BA0FD: push    0
0x4BA0FF: push    ebx
0x4BA100: call    __memset
0x4BA105: add     esp, 10h
0x4BA108: xor     eax, eax
0x4BA10A: test    esi, esi
0x4BA10C: jbe     short loc_4BA124
0x4BA10E: mov     edi, edi
0x4BA110: mov     ecx, [edi+4Ch]
0x4BA113: mov     ecx, [ecx+eax*4]
0x4BA116: test    ecx, ecx
0x4BA118: jbe     short loc_4BA11D
0x4BA11A: mov     [ebx+eax*4], ecx
0x4BA11D: add     eax, 1
0x4BA120: cmp     eax, esi
0x4BA122: jb      short loc_4BA110
0x4BA124: push    ebp; Size
0x4BA125: push    ebx; Src
0x4BA126: push    4D414E53h; int
0x4BA12B: call    TESForm_PutFormRecordChunkData
0x4BA130: add     esp, 0Ch
0x4BA133: pop     esi
0x4BA134: pop     ebp
0x4BA135: pop     ebx
0x4BA136: push    20h ; ' '; Size
0x4BA138: lea     edx, [edi+58h]
0x4BA13B: push    edx; Src
0x4BA13C: push    4D414E43h; int
0x4BA141: call    TESForm_PutFormRecordChunkData
0x4BA146: push    8; Size
0x4BA148: lea     eax, [edi+78h]
0x4BA14B: push    eax; Src
0x4BA14C: push    4D414E42h; int
0x4BA151: call    TESForm_PutFormRecordChunkData
0x4BA156: add     esp, 18h
0x4BA159: mov     ecx, edi
0x4BA15B: pop     edi
0x4BA15C: jmp     TESForm_FinalizeFormRecord
