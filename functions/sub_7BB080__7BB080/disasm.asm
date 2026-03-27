0x7BB080: push    0FFFFFFFFh
0x7BB082: push    offset SEH_803C90
0x7BB087: mov     eax, large fs:0
0x7BB08D: push    eax
0x7BB08E: push    ecx
0x7BB08F: push    esi
0x7BB090: push    edi
0x7BB091: mov     eax, ds:0B30AACh
0x7BB096: xor     eax, esp
0x7BB098: push    eax
0x7BB099: lea     eax, [esp+1Ch+var_C]
0x7BB09D: mov     large fs:0, eax
0x7BB0A3: mov     edi, ecx
0x7BB0A5: cmp     dword ptr [edi+2Ch], 0
0x7BB0A9: lea     esi, [edi+2Ch]
0x7BB0AC: jnz     short loc_7BB112
0x7BB0AE: push    34h ; '4'; Size
0x7BB0B0: call    FormHeapAlloc
0x7BB0B5: add     esp, 4
0x7BB0B8: mov     [esp+1Ch+var_10], eax
0x7BB0BC: test    eax, eax
0x7BB0BE: mov     [esp+1Ch+var_4], 0
0x7BB0C6: jz      short loc_7BB0D5
0x7BB0C8: mov     ecx, [edi+14h]
0x7BB0CB: push    ecx
0x7BB0CC: mov     ecx, eax
0x7BB0CE: call    NiD3DShaderCostantMapPixel__Construct
0x7BB0D3: jmp     short loc_7BB0D7
0x7BB0D5: xor     eax, eax
0x7BB0D7: push    eax; a2
0x7BB0D8: mov     ecx, esi; this
0x7BB0DA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BB0E2: call    NiSmartPointer_Set??
0x7BB0E7: mov     ecx, [esi]
0x7BB0E9: mov     edx, [ecx]
0x7BB0EB: mov     edx, [edx+18h]
0x7BB0EE: push    0
0x7BB0F0: lea     eax, [edi+0E0h]
0x7BB0F6: push    eax
0x7BB0F7: push    4
0x7BB0F9: push    8
0x7BB0FB: push    offset EmptyString
0x7BB100: push    1
0x7BB102: push    4
0x7BB104: push    0
0x7BB106: push    10000005h
0x7BB10B: push    offset aParams; "Params"
0x7BB110: call    edx
0x7BB112: cmp     dword ptr [edi+30h], 0
0x7BB116: lea     esi, [edi+30h]
0x7BB119: jnz     loc_7BB26D
0x7BB11F: push    34h ; '4'; Size
0x7BB121: call    FormHeapAlloc
0x7BB126: add     esp, 4
0x7BB129: mov     [esp+1Ch+var_10], eax
0x7BB12D: test    eax, eax
0x7BB12F: mov     [esp+1Ch+var_4], 1
0x7BB137: jz      short loc_7BB146
0x7BB139: mov     ecx, [edi+14h]
0x7BB13C: push    ecx
0x7BB13D: mov     ecx, eax
0x7BB13F: call    NiD3DShaderCostantMapVertex__Construct
0x7BB144: jmp     short loc_7BB148
0x7BB146: xor     eax, eax
0x7BB148: push    eax; a2
0x7BB149: mov     ecx, esi; this
0x7BB14B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BB153: call    NiSmartPointer_Set??
0x7BB158: mov     ecx, [esi]
0x7BB15A: mov     edx, [ecx]
0x7BB15C: mov     eax, [edx+18h]
0x7BB15F: push    0
0x7BB161: push    0
0x7BB163: push    0
0x7BB165: push    0
0x7BB167: push    0
0x7BB169: push    4
0x7BB16B: push    0
0x7BB16D: push    0
0x7BB16F: push    20000009h
0x7BB174: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7BB179: call    eax
0x7BB17B: mov     ecx, [esi]
0x7BB17D: mov     edx, [ecx]
0x7BB17F: mov     eax, [edx+18h]
0x7BB182: push    0
0x7BB184: push    0
0x7BB186: push    0
0x7BB188: push    0
0x7BB18A: push    0
0x7BB18C: push    4
0x7BB18E: push    8
0x7BB190: push    0
0x7BB192: push    20000009h
0x7BB197: push    offset aWorldtranspose; "WorldTranspose"
0x7BB19C: call    eax
0x7BB19E: mov     ecx, [esi]
0x7BB1A0: mov     edx, [ecx]
0x7BB1A2: mov     eax, [edx+18h]
0x7BB1A5: push    0
0x7BB1A7: push    offset qword_B43178
0x7BB1AC: push    4
0x7BB1AE: push    10h
0x7BB1B0: push    offset EmptyString
0x7BB1B5: push    1
0x7BB1B7: push    4
0x7BB1B9: push    0
0x7BB1BB: push    10000007h
0x7BB1C0: push    offset aColor0; "Color0"
0x7BB1C5: call    eax
0x7BB1C7: mov     ecx, [esi]
0x7BB1C9: mov     edx, [ecx]
0x7BB1CB: mov     eax, [edx+18h]
0x7BB1CE: push    0
0x7BB1D0: push    offset qword_B43188
0x7BB1D5: push    4
0x7BB1D7: push    10h
0x7BB1D9: push    offset EmptyString
0x7BB1DE: push    1
0x7BB1E0: push    5
0x7BB1E2: push    0
0x7BB1E4: push    10000007h
0x7BB1E9: push    offset aColor1; "Color1"
0x7BB1EE: call    eax
0x7BB1F0: mov     ecx, [esi]
0x7BB1F2: mov     edx, [ecx]
0x7BB1F4: mov     eax, [edx+18h]
0x7BB1F7: push    0
0x7BB1F9: push    offset qword_B43198
0x7BB1FE: push    4
0x7BB200: push    10h
0x7BB202: push    offset EmptyString
0x7BB207: push    1
0x7BB209: push    6
0x7BB20B: push    0
0x7BB20D: push    10000007h
0x7BB212: push    offset aColor2; "Color2"
0x7BB217: call    eax
0x7BB219: mov     ecx, [esi]
0x7BB21B: mov     edx, [ecx]
0x7BB21D: push    0
0x7BB21F: push    offset dword_B43168
0x7BB224: push    4
0x7BB226: push    10h
0x7BB228: push    offset EmptyString
0x7BB22D: mov     eax, [edx+18h]
0x7BB230: push    1
0x7BB232: push    7
0x7BB234: push    0
0x7BB236: push    10000007h
0x7BB23B: push    offset aEyepos; "eyepos"
0x7BB240: call    eax
0x7BB242: mov     ecx, [esi]
0x7BB244: mov     edx, [ecx]
0x7BB246: mov     eax, [edx+18h]
0x7BB249: push    0
0x7BB24B: add     edi, 0DCh ; 'Ü'
0x7BB251: push    edi
0x7BB252: push    4
0x7BB254: push    4
0x7BB256: push    offset EmptyString
0x7BB25B: push    1
0x7BB25D: push    0Ch
0x7BB25F: push    0
0x7BB261: push    10000004h
0x7BB266: push    offset aParams; "Params"
0x7BB26B: call    eax
0x7BB26D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7BB271: mov     large fs:0, ecx
0x7BB278: pop     ecx
0x7BB279: pop     edi
0x7BB27A: pop     esi
0x7BB27B: add     esp, 10h
0x7BB27E: retn
