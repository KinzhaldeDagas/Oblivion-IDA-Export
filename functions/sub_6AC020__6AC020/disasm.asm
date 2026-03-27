0x6AC020: sub     esp, 0Ch
0x6AC023: push    edi
0x6AC024: mov     edi, ecx
0x6AC026: fld     dword ptr [edi+0B8h]
0x6AC02C: fstp    dword ptr ds:0B16190h
0x6AC032: fld     dword ptr [edi+0BCh]
0x6AC038: fstp    dword ptr ds:0B16198h
0x6AC03E: fld     dword ptr [edi+0C4h]
0x6AC044: fstp    dword ptr ds:0B161A8h
0x6AC04A: fld     dword ptr [edi+2F8h]
0x6AC050: fstp    dword ptr ds:0B161A0h
0x6AC056: test    byte ptr [edi+0DCh], 1
0x6AC05D: jz      short loc_6AC081
0x6AC05F: call    sub_6A8DB0
0x6AC064: mov     eax, [edi+74h]
0x6AC067: mov     ecx, [eax]
0x6AC069: mov     edx, [ecx+8]
0x6AC06C: push    eax
0x6AC06D: call    edx
0x6AC06F: mov     eax, [edi+70h]
0x6AC072: mov     ecx, [eax]
0x6AC074: mov     edx, [ecx+8]
0x6AC077: push    eax
0x6AC078: call    edx
0x6AC07A: and     dword ptr [edi+0DCh], 0FFFFFFFEh
0x6AC081: mov     ecx, [edi+324h]
0x6AC087: push    ebp
0x6AC088: xor     ebp, ebp
0x6AC08A: cmp     ecx, ebp
0x6AC08C: push    esi
0x6AC08D: jz      short loc_6AC0AE
0x6AC08F: call    sub_6B73C0
0x6AC094: mov     esi, [edi+324h]
0x6AC09A: cmp     esi, ebp
0x6AC09C: jz      short loc_6AC0AE
0x6AC09E: mov     ecx, esi; this
0x6AC0A0: call    sub_6B73E0
0x6AC0A5: push    esi
0x6AC0A6: call    FormHeapFree
0x6AC0AB: add     esp, 4
0x6AC0AE: mov     ecx, [edi+300h]
0x6AC0B4: cmp     ecx, ebp
0x6AC0B6: jz      short loc_6AC12C
0x6AC0B8: mov     edx, [ecx+4]
0x6AC0BB: xor     eax, eax
0x6AC0BD: cmp     edx, ebp
0x6AC0BF: jbe     short loc_6AC0D8
0x6AC0C1: mov     esi, [ecx+8]
0x6AC0C4: mov     ecx, esi
0x6AC0C6: cmp     [ecx], ebp
0x6AC0C8: jnz     loc_6AC180
0x6AC0CE: add     eax, 1
0x6AC0D1: add     ecx, 4
0x6AC0D4: cmp     eax, edx
0x6AC0D6: jb      short loc_6AC0C6
0x6AC0D8: xor     eax, eax
0x6AC0DA: cmp     eax, ebp
0x6AC0DC: mov     [esp+18h+var_C], eax
0x6AC0E0: jz      short loc_6AC11A
0x6AC0E2: lea     eax, [esp+18h+var_8]
0x6AC0E6: push    eax
0x6AC0E7: lea     ecx, [esp+1Ch+var_4]
0x6AC0EB: push    ecx
0x6AC0EC: mov     ecx, [edi+300h]
0x6AC0F2: lea     edx, [esp+20h+var_C]
0x6AC0F6: push    edx
0x6AC0F7: call    sub_452600
0x6AC0FC: mov     esi, [esp+18h+var_8]
0x6AC100: cmp     esi, ebp
0x6AC102: jz      short loc_6AC114
0x6AC104: mov     ecx, esi
0x6AC106: call    sub_6B6700
0x6AC10B: push    esi
0x6AC10C: call    FormHeapFree
0x6AC111: add     esp, 4
0x6AC114: cmp     [esp+18h+var_C], ebp
0x6AC118: jnz     short loc_6AC0E2
0x6AC11A: mov     ecx, [edi+300h]
0x6AC120: cmp     ecx, ebp
0x6AC122: jz      short loc_6AC12C
0x6AC124: mov     eax, [ecx]
0x6AC126: mov     edx, [eax]
0x6AC128: push    1
0x6AC12A: call    edx
0x6AC12C: mov     ecx, [edi+304h]
0x6AC132: cmp     ecx, ebp
0x6AC134: jz      short loc_6AC13E
0x6AC136: mov     eax, [ecx]
0x6AC138: mov     edx, [eax]
0x6AC13A: push    1
0x6AC13C: call    edx
0x6AC13E: mov     ecx, [edi+320h]
0x6AC144: cmp     ecx, ebp
0x6AC146: jz      short loc_6AC150
0x6AC148: mov     eax, [ecx]
0x6AC14A: mov     edx, [eax]
0x6AC14C: push    1
0x6AC14E: call    edx
0x6AC150: mov     eax, [edi+308h]
0x6AC156: cmp     eax, ebp
0x6AC158: jz      loc_6AC1E7
0x6AC15E: cmp     [eax+0Ch], ebp
0x6AC161: jz      short loc_6AC1D5
0x6AC163: push    ebx
0x6AC164: mov     esi, [edi+308h]
0x6AC16A: mov     eax, [esi+4]
0x6AC16D: mov     ebx, [eax+8]
0x6AC170: mov     ecx, eax
0x6AC172: mov     eax, [ecx]
0x6AC174: cmp     eax, ebp
0x6AC176: mov     [esi+4], eax
0x6AC179: jz      short loc_6AC188
0x6AC17B: mov     [eax+4], ebp
0x6AC17E: jmp     short loc_6AC18B
0x6AC180: mov     eax, [esi+eax*4]
0x6AC183: jmp     loc_6AC0DA
0x6AC188: mov     [esi+8], ebp
0x6AC18B: mov     edx, [esi]
0x6AC18D: mov     eax, [edx+8]
0x6AC190: push    ecx
0x6AC191: mov     ecx, esi
0x6AC193: call    eax
0x6AC195: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x6AC199: cmp     ebx, ebp
0x6AC19B: jz      short loc_6AC1C9
0x6AC19D: mov     esi, [ebx+10h]
0x6AC1A0: cmp     esi, ebp
0x6AC1A2: jz      short loc_6AC1C0
0x6AC1A4: lea     ecx, [esi+4]
0x6AC1A7: push    ecx; lpAddend
0x6AC1A8: call    dword ptr ds:0A2807Ch
0x6AC1AE: test    eax, eax
0x6AC1B0: jnz     short loc_6AC1C0
0x6AC1B2: cmp     esi, ebp
0x6AC1B4: jz      short loc_6AC1C0
0x6AC1B6: mov     edx, [esi]
0x6AC1B8: mov     eax, [edx]
0x6AC1BA: push    1
0x6AC1BC: mov     ecx, esi
0x6AC1BE: call    eax
0x6AC1C0: push    ebx
0x6AC1C1: call    FormHeapFree
0x6AC1C6: add     esp, 4
0x6AC1C9: mov     ecx, [edi+308h]
0x6AC1CF: cmp     [ecx+0Ch], ebp
0x6AC1D2: jnz     short loc_6AC164
0x6AC1D4: pop     ebx
0x6AC1D5: mov     ecx, [edi+308h]
0x6AC1DB: cmp     ecx, ebp
0x6AC1DD: jz      short loc_6AC1E7
0x6AC1DF: mov     edx, [ecx]
0x6AC1E1: mov     eax, [edx]
0x6AC1E3: push    1
0x6AC1E5: call    eax
0x6AC1E7: mov     edi, [edi+8]
0x6AC1EA: pop     esi
0x6AC1EB: cmp     edi, ebp
0x6AC1ED: pop     ebp
0x6AC1EE: jz      short loc_6AC1F8
0x6AC1F0: mov     ecx, [edi]
0x6AC1F2: mov     edx, [ecx+8]
0x6AC1F5: push    edi
0x6AC1F6: call    edx
0x6AC1F8: call    dword ptr ds:0A283C0h
0x6AC1FE: pop     edi
0x6AC1FF: add     esp, 0Ch
0x6AC202: jmp     loc_6AF870
