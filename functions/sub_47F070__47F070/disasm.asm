0x47F070: push    0FFFFFFFFh; Verified generic NiLines_CreateSegment: copies two endpoint positions and two per-vertex colors, supplies line flags [1,0], and returns a two-vertex NiLines segment. TESPathGrid_RebuildRenderedGraph calls it for adjacency edges.
0x47F072: push    offset SEH_6ACAB0
0x47F077: mov     eax, large fs:0
0x47F07D: push    eax
0x47F07E: push    ebp
0x47F07F: push    esi
0x47F080: push    edi
0x47F081: mov     eax, ds:0B30AACh
0x47F086: xor     eax, esp
0x47F088: push    eax
0x47F089: lea     eax, [esp+1Ch+var_C]
0x47F08D: mov     large fs:0, eax
0x47F093: push    18h; Size
0x47F095: call    FormHeapAlloc
0x47F09A: mov     edi, eax
0x47F09C: mov     eax, [esp+20h+start]
0x47F0A0: mov     ecx, [eax]
0x47F0A2: mov     [edi], ecx
0x47F0A4: mov     edx, [eax+4]
0x47F0A7: mov     [edi+4], edx
0x47F0AA: mov     eax, [eax+8]
0x47F0AD: mov     [edi+8], eax
0x47F0B0: mov     eax, [esp+20h+end]
0x47F0B4: mov     ecx, [eax]
0x47F0B6: mov     [edi+0Ch], ecx
0x47F0B9: mov     edx, [eax+4]
0x47F0BC: mov     [edi+10h], edx
0x47F0BF: mov     eax, [eax+8]
0x47F0C2: push    20h ; ' '; Size
0x47F0C4: mov     [edi+14h], eax
0x47F0C7: call    FormHeapAlloc
0x47F0CC: mov     esi, eax
0x47F0CE: add     esp, 8
0x47F0D1: mov     [esp+1Ch+start], esi
0x47F0D5: test    esi, esi
0x47F0D7: mov     [esp+1Ch+var_4], 0
0x47F0DF: jz      short loc_47F0F2
0x47F0E1: push    offset sub_47EA50
0x47F0E6: push    2
0x47F0E8: push    10h
0x47F0EA: push    esi
0x47F0EB: call    sub_401080
0x47F0F0: jmp     short loc_47F0F4
0x47F0F2: xor     esi, esi
0x47F0F4: mov     eax, [esp+1Ch+startColor]
0x47F0F8: mov     ecx, [eax]
0x47F0FA: mov     [esi], ecx
0x47F0FC: mov     edx, [eax+4]
0x47F0FF: mov     [esi+4], edx
0x47F102: mov     ecx, [eax+8]
0x47F105: mov     [esi+8], ecx
0x47F108: mov     edx, [eax+0Ch]
0x47F10B: mov     eax, [esp+1Ch+endColor]
0x47F10F: mov     [esi+0Ch], edx
0x47F112: mov     ecx, [eax]
0x47F114: mov     [esi+10h], ecx
0x47F117: mov     edx, [eax+4]
0x47F11A: mov     [esi+14h], edx
0x47F11D: mov     ecx, [eax+8]
0x47F120: mov     [esi+18h], ecx
0x47F123: mov     edx, [eax+0Ch]
0x47F126: push    2; Size
0x47F128: mov     [esp+20h+var_4], 0FFFFFFFFh
0x47F130: mov     [esi+1Ch], edx
0x47F133: call    FormHeapAlloc
0x47F138: mov     ebp, eax
0x47F13A: push    0C0h ; 'À'; Size
0x47F13F: mov     byte ptr [ebp+0], 1
0x47F143: mov     byte ptr [ebp+1], 0
0x47F147: call    FormHeapAlloc
0x47F14C: add     esp, 8
0x47F14F: mov     [esp+1Ch+start], eax
0x47F153: test    eax, eax
0x47F155: mov     [esp+1Ch+var_4], 1
0x47F15D: jz      short loc_47F184
0x47F15F: push    ebp; lineFlags
0x47F160: push    0; arg7
0x47F162: push    0; arg6
0x47F164: push    0; arg5
0x47F166: push    esi; colors
0x47F167: push    edi; vertices
0x47F168: push    2; vertexCount
0x47F16A: mov     ecx, eax; this
0x47F16C: call    NiLines_ctorWithGeometryData; Verified NiLines constructor wrapper: create NiGeometryData via NiLinesData_ctor, initialize NiGeometry, then install NiLines vtable.
0x47F171: mov     ecx, [esp+1Ch+var_C]
0x47F175: mov     large fs:0, ecx
0x47F17C: pop     ecx
0x47F17D: pop     edi
0x47F17E: pop     esi
0x47F17F: pop     ebp
0x47F180: add     esp, 0Ch
0x47F183: retn
0x47F184: xor     eax, eax
0x47F186: mov     ecx, [esp+1Ch+var_C]
0x47F18A: mov     large fs:0, ecx
0x47F191: pop     ecx
0x47F192: pop     edi
0x47F193: pop     esi
0x47F194: pop     ebp
0x47F195: add     esp, 0Ch
0x47F198: retn
0x9B3B90: mov     eax, [ebp+4]
0x9B3B93: push    eax
0x9B3B94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3B99: pop     ecx
0x9B3B9A: retn
0x9B3B9B: mov     eax, [ebp+4]
0x9B3B9E: push    eax
0x9B3B9F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B3BA4: pop     ecx
0x9B3BA5: retn
0x9B3BA6: mov     edx, [esp+arg_4]
0x9B3BAA: lea     eax, [edx-0Ch]
0x9B3BAD: mov     ecx, [edx-10h]
0x9B3BB0: xor     ecx, eax
0x9B3BB2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3BB7: mov     eax, offset stru_ADF520
0x9B3BBC: jmp     ___CxxFrameHandler3
