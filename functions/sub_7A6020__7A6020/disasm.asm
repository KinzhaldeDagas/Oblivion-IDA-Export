0x7A6020: push    0FFFFFFFFh; Oblivion SIdvLeafInfo::Parse: token 1009 clears/resizes the compact 0x54 leaf-texture vector, parses tokens 4000-4007 into a temporary, and deep-assigns each indexed slot. Oblivion is authoritative; later RT mesh fields are absent.
0x7A6022: push    offset OB_SIdvLeafInfo_Parse_010201A0_SEH
0x7A6027: mov     eax, large fs:0
0x7A602D: push    eax
0x7A602E: sub     esp, 17Ch
0x7A6034: mov     eax, ds:0B30AACh
0x7A6039: xor     eax, esp
0x7A603B: mov     [esp+188h+var_10], eax
0x7A6042: push    ebx
0x7A6043: push    ebp
0x7A6044: push    esi
0x7A6045: push    edi
0x7A6046: mov     eax, ds:0B30AACh
0x7A604B: xor     eax, esp
0x7A604D: push    eax
0x7A604E: lea     eax, [esp+19Ch+var_C]
0x7A6055: mov     large fs:0, eax
0x7A605B: mov     esi, [esp+19Ch+file]
0x7A6062: mov     ebp, ecx
0x7A6064: mov     ecx, esi; this
0x7A6066: mov     [esp+19Ch+var_184], ebp
0x7A606A: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A606F: xor     ebx, ebx
0x7A6071: cmp     eax, 0BB8h
0x7A6076: jg      loc_7A648B
0x7A607C: jz      loc_7A647C
0x7A6082: cmp     eax, 3F1h
0x7A6087: jnz     def_7A6499; jumptable 007A6499 default case
0x7A608D: mov     ecx, esi; this
0x7A608F: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A6094: mov     ecx, esi; this
0x7A6096: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-06-12 IDA-only leaf-level pass: in the 0x3F1 general-leaf block, this dword is the compact leaf texture-record count used to resize the 0x54-byte SIdvLeafTexture vector; it is not by itself a BSTreeModel leaf-property count.
0x7A609B: mov     edi, [ebp+18h]
0x7A609E: add     ebp, 10h
0x7A60A1: cmp     [ebp+4], edi
0x7A60A4: mov     [esp+19Ch+newSize], eax
0x7A60A8: jbe     short loc_7A60AF
0x7A60AA: call    __invalid_parameter_noinfo
0x7A60AF: mov     eax, [esp+19Ch+var_184]
0x7A60B3: mov     ebp, [ebp+4]
0x7A60B6: add     eax, 10h
0x7A60B9: cmp     ebp, [eax+8]
0x7A60BC: jbe     short loc_7A60C3
0x7A60BE: call    __invalid_parameter_noinfo
0x7A60C3: push    edi; last
0x7A60C4: mov     edi, [esp+1A0h+var_184]
0x7A60C8: lea     ecx, [edi+10h]; this
0x7A60CB: push    ecx; lastOwner
0x7A60CC: push    ebp; first
0x7A60CD: push    ecx; firstOwner
0x7A60CE: lea     eax, [esp+1ACh+result]
0x7A60D5: push    eax; result
0x7A60D6: call    OB_stVector_SIdvLeafTexture_EraseRange_010201A0; Token 1009 first erases the complete prior compact leaf-texture range while retaining vector allocation.
0x7A60DB: sub     esp, 54h
0x7A60DE: mov     ecx, esp; this
0x7A60E0: mov     [esp+1F0h+var_188], esp
0x7A60E4: call    OB_SIdvLeafTexture_ctor_010201A0; Compact Oblivion SIdvLeafTexture constructor. The executable record is exactly 0x54 bytes and ends after sizeUsed; RT 4.1 mesh-leaf extension fields are absent.
0x7A60E9: mov     ebp, [esp+1F0h+newSize]
0x7A60ED: push    ebp; newSize
0x7A60EE: lea     ecx, [edi+10h]; this
0x7A60F1: call    OB_stVector_SIdvLeafTexture_ResizeFill_010201A0; Resize leafTextures to File_LeafLevelCount using deep copies of the freshly constructed 0x54 default record.
0x7A60F6: cmp     ebp, ebx
0x7A60F8: mov     [esp+19Ch+var_180], ebx
0x7A60FC: jle     loc_7A646C
0x7A6102: mov     [esp+19Ch+var_188], ebx
0x7A6106: jmp     short loc_7A6110
0x7A6110: fld     dword ptr ds:0A524B0h
0x7A6116: mov     ebp, 0Fh
0x7A611B: fst     [esp+19Ch+source.baseColor]
0x7A6122: mov     [esp+19Ch+source.blossomFlag], bl
0x7A6129: fst     [esp+19Ch+source.baseColor+4]
0x7A6130: mov     [esp+19Ch+source.filename.capacity], ebp
0x7A6137: fstp    [esp+19Ch+source.baseColor+8]
0x7A613E: mov     [esp+19Ch+source.filename.size], ebx
0x7A6145: fld     dword ptr ds:0A3D9A4h
0x7A614B: mov     byte ptr [esp+19Ch+source.filename.storage], bl
0x7A6152: fstp    [esp+19Ch+source.colorVariance]
0x7A6159: fld     dword ptr ds:0A3D65Ch
0x7A615F: fstp    [esp+19Ch+source.textureOrigin]
0x7A6166: fld1
0x7A6168: fstp    [esp+19Ch+source.textureOrigin+4]
0x7A616F: fldz
0x7A6171: fst     [esp+19Ch+source.textureOrigin+8]
0x7A6178: fld     dword ptr ds:0A8C958h
0x7A617E: fst     [esp+19Ch+source.textureSize]
0x7A6185: fstp    [esp+19Ch+source.textureSize+4]
0x7A618C: fst     [esp+19Ch+source.textureSize+8]
0x7A6193: fld     dword ptr ds:0A31C80h
0x7A6199: fst     [esp+19Ch+source.sizeUsed]
0x7A61A0: fstp    [esp+19Ch+source.sizeUsed+4]
0x7A61A7: fstp    [esp+19Ch+source.sizeUsed+8]
0x7A61AE: mov     ecx, esi; this
0x7A61B0: mov     [esp+19Ch+var_4], ebx
0x7A61B7: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A61BC: mov     ecx, esi; this
0x7A61BE: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A61C3: jmp     short loc_7A61D0
0x7A61D0: add     eax, 0FFFFF060h; switch 8 cases
0x7A61D5: cmp     eax, 7
0x7A61D8: ja      OB_SIdvLeafInfo_Parse_MalformedSingleLeaf_010201A0; jumptable 007A61DE default case
0x7A61DE: jmp     ds:jpt_7A61DE[eax*4]; switch jump
0x7A61E5: mov     edi, [esi]; jumptable 007A61DE case 4000
0x7A61E7: lea     ecx, [edi+1]
0x7A61EA: mov     [esi], ecx
0x7A61EC: mov     ecx, [esi+8]
0x7A61EF: cmp     ecx, ebx
0x7A61F1: jz      short loc_7A61FC
0x7A61F3: mov     eax, [esi+0Ch]
0x7A61F6: sub     eax, ecx
0x7A61F8: cmp     edi, eax
0x7A61FA: jb      short loc_7A6201
0x7A61FC: call    __invalid_parameter_noinfo
0x7A6201: mov     edx, [esi+8]
0x7A6204: cmp     [edi+edx], bl
0x7A6207: setnz   al
0x7A620A: mov     [esp+19Ch+source.blossomFlag], al
0x7A6211: jmp     loc_7A63D8
0x7A6216: lea     ecx, [esp+19Ch+outVec3]; jumptable 007A61DE case 4001
0x7A621D: push    ecx; outVec3
0x7A621E: mov     ecx, esi; this
0x7A6220: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A6225: mov     edx, [eax]
0x7A6227: mov     [esp+19Ch+source.baseColor], edx
0x7A622E: mov     ecx, [eax+4]
0x7A6231: mov     [esp+19Ch+source.baseColor+4], ecx
0x7A6238: mov     edx, [eax+8]
0x7A623B: mov     [esp+19Ch+source.baseColor+8], edx
0x7A6242: jmp     loc_7A63D8
0x7A6247: mov     ecx, esi; jumptable 007A61DE case 4002
0x7A6249: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A624E: fstp    [esp+19Ch+source.colorVariance]
0x7A6255: jmp     loc_7A63D8
0x7A625A: lea     eax, [esp+19Ch+outSmallString]; jumptable 007A61DE case 4003
0x7A625E: push    eax; outSmallString
0x7A625F: mov     ecx, esi; this
0x7A6261: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x7A6266: push    0FFFFFFFFh; count
0x7A6268: push    ebx; offset
0x7A6269: lea     ecx, [esp+1A4h+outSmallString]
0x7A626D: push    ecx; source
0x7A626E: lea     ecx, [esp+1A8h+var_178]; this
0x7A6272: mov     byte ptr [esp+1A8h+var_4], 1
0x7A627A: mov     [esp+1A8h+var_178.capacity], ebp
0x7A627E: mov     [esp+1A8h+var_178.size], ebx
0x7A6282: mov     byte ptr [esp+1A8h+var_178.storage], bl
0x7A6286: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A628B: mov     edi, 10h
0x7A6290: cmp     [esp+19Ch+var_144], edi
0x7A6294: jb      short loc_7A62A3
0x7A6296: mov     edx, [esp+19Ch+var_158]
0x7A629A: push    edx
0x7A629B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A62A0: add     esp, 4
0x7A62A3: mov     [esp+19Ch+var_144], ebp
0x7A62A7: mov     [esp+19Ch+var_148], ebx
0x7A62AB: mov     byte ptr [esp+19Ch+var_158], bl
0x7A62AF: push    0FFFFFFFFh; count
0x7A62B1: push    ebx; offset
0x7A62B2: lea     eax, [esp+1A4h+var_178]
0x7A62B6: push    eax; source
0x7A62B7: lea     ecx, [esp+1A8h+source.filename]; this
0x7A62BE: mov     byte ptr [esp+1A8h+var_4], 2
0x7A62C6: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A62CB: cmp     [esp+19Ch+var_178.capacity], edi
0x7A62CF: mov     byte ptr [esp+19Ch+var_4], bl
0x7A62D6: jb      short loc_7A62E5
0x7A62D8: mov     ecx, dword ptr [esp+19Ch+var_178.storage]
0x7A62DC: push    ecx
0x7A62DD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A62E2: add     esp, 4
0x7A62E5: lea     edx, [esp+19Ch+var_140]
0x7A62E9: push    edx; result
0x7A62EA: lea     ecx, [esp+1A0h+source.filename]; filename
0x7A62F1: mov     [esp+1A0h+var_178.capacity], ebp
0x7A62F5: mov     [esp+1A0h+var_178.size], ebx
0x7A62F9: mov     byte ptr [esp+1A0h+var_178.storage], bl
0x7A62FD: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x7A6302: push    0FFFFFFFFh; count
0x7A6304: push    ebx; offset
0x7A6305: push    eax; source
0x7A6306: lea     ecx, [esp+1A8h+source.filename]; this
0x7A630D: mov     byte ptr [esp+1A8h+var_4], 3
0x7A6315: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A631A: cmp     [esp+19Ch+var_140.capacity], edi
0x7A631E: mov     byte ptr [esp+19Ch+var_4], bl
0x7A6325: jb      short loc_7A6334
0x7A6327: mov     eax, dword ptr [esp+19Ch+var_140.storage]
0x7A632B: push    eax
0x7A632C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A6331: add     esp, 4
0x7A6334: mov     [esp+19Ch+var_140.capacity], ebp
0x7A6338: mov     [esp+19Ch+var_140.size], ebx
0x7A633C: mov     byte ptr [esp+19Ch+var_140.storage], bl
0x7A6340: jmp     loc_7A63D8
0x7A6345: lea     ecx, [esp+19Ch+var_CC]; jumptable 007A61DE case 4004
0x7A634C: push    ecx; outVec3
0x7A634D: mov     ecx, esi; this
0x7A634F: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A6354: mov     edx, [eax]
0x7A6356: mov     [esp+19Ch+source.textureOrigin], edx
0x7A635D: mov     ecx, [eax+4]
0x7A6360: mov     [esp+19Ch+source.textureOrigin+4], ecx
0x7A6367: mov     edx, [eax+8]
0x7A636A: mov     [esp+19Ch+source.textureOrigin+8], edx
0x7A6371: jmp     short loc_7A63D8
0x7A6373: lea     eax, [esp+19Ch+var_D8]; jumptable 007A61DE case 4005
0x7A637A: push    eax; outVec3
0x7A637B: mov     ecx, esi; this
0x7A637D: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A6382: mov     ecx, [eax]
0x7A6384: mov     [esp+19Ch+source.textureSize], ecx
0x7A638B: mov     edx, [eax+4]
0x7A638E: mov     [esp+19Ch+source.textureSize+4], edx
0x7A6395: mov     eax, [eax+8]
0x7A6398: mov     [esp+19Ch+source.textureSize+8], eax
0x7A639F: jmp     short loc_7A63D8
0x7A63A1: lea     ecx, [esp+19Ch+var_E4]; jumptable 007A61DE case 4006
0x7A63A8: push    ecx; outVec3
0x7A63A9: mov     ecx, esi; this
0x7A63AB: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A63B0: mov     edx, [eax]
0x7A63B2: mov     [esp+19Ch+source.sizeUsed], edx
0x7A63B9: mov     ecx, [eax+4]
0x7A63BC: mov     [esp+19Ch+source.sizeUsed+4], ecx
0x7A63C3: mov     edx, [eax+8]
0x7A63C6: mov     [esp+19Ch+source.sizeUsed+8], edx
0x7A63CD: jmp     short loc_7A63D8
0x7A63CF: mov     ecx, esi; jumptable 007A61DE case 4007
0x7A63D1: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A63D6: fstp    st
0x7A63D8: mov     ecx, esi; this
0x7A63DA: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A63DF: cmp     eax, 3F0h
0x7A63E4: jnz     loc_7A61D0
0x7A63EA: mov     edi, [esp+19Ch+var_184]
0x7A63EE: mov     eax, [edi+14h]
0x7A63F1: add     edi, 10h
0x7A63F4: cmp     eax, ebx
0x7A63F6: jz      short loc_7A6414
0x7A63F8: mov     ecx, [edi+8]
0x7A63FB: sub     ecx, eax
0x7A63FD: mov     eax, 30C30C31h
0x7A6402: imul    ecx
0x7A6404: sar     edx, 4
0x7A6407: mov     eax, edx
0x7A6409: shr     eax, 1Fh
0x7A640C: add     eax, edx
0x7A640E: cmp     [esp+19Ch+var_180], eax
0x7A6412: jb      short loc_7A6419
0x7A6414: call    __invalid_parameter_noinfo
0x7A6419: mov     ecx, [edi+4]
0x7A641C: add     ecx, [esp+19Ch+var_188]; this
0x7A6420: lea     eax, [esp+19Ch+source]
0x7A6427: push    eax; source
0x7A6428: call    OB_SIdvLeafTexture_CopyAssign_010201A0; Deep-assign the fully parsed temporary SIdvLeafTexture into leafTextures[leafTextureIndex].
0x7A642D: cmp     [esp+19Ch+source.filename.capacity], 10h
0x7A6435: mov     [esp+19Ch+var_4], 0FFFFFFFFh
0x7A6440: jb      short loc_7A6452
0x7A6442: mov     ecx, dword ptr [esp+19Ch+source.filename.storage]
0x7A6449: push    ecx
0x7A644A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A644F: add     esp, 4
0x7A6452: mov     eax, [esp+19Ch+var_180]
0x7A6456: add     [esp+19Ch+var_188], 54h ; 'T'
0x7A645B: add     eax, 1
0x7A645E: cmp     eax, [esp+19Ch+newSize]
0x7A6462: mov     [esp+19Ch+var_180], eax
0x7A6466: jl      loc_7A6110
0x7A646C: mov     ecx, esi; this
0x7A646E: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A6473: mov     ebp, [esp+19Ch+var_184]
0x7A6477: jmp     loc_7A6539
0x7A647C: mov     ecx, esi; this
0x7A647E: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A6483: fstp    dword ptr [ebp+24h]
0x7A6486: jmp     loc_7A6539
0x7A648B: add     eax, 0FFFFF447h; switch 10 cases
0x7A6490: cmp     eax, 9
0x7A6493: ja      def_7A6499; jumptable 007A6499 default case
0x7A6499: jmp     ds:jpt_7A6499[eax*4]; switch jump
0x7A64A0: mov     ecx, esi; jumptable 007A6499 case 3001
0x7A64A2: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A64A7: mov     [ebp+2Ch], eax
0x7A64AA: jmp     loc_7A6539
0x7A64AF: mov     ecx, esi; jumptable 007A6499 case 3002
0x7A64B1: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A64B6: fstp    dword ptr [ebp+28h]
0x7A64B9: jmp     short loc_7A6539
0x7A64BB: mov     ecx, [esi]; File_Leaf_ColorShift (3003): Oblivion consumes exactly one raw bool byte and discards it; no vec3 payload.
0x7A64BD: lea     edx, [ecx+1]
0x7A64C0: mov     [esi], edx
0x7A64C2: mov     edx, [esi+8]
0x7A64C5: cmp     edx, ebx
0x7A64C7: jz      short loc_7A64D2
0x7A64C9: mov     eax, [esi+0Ch]
0x7A64CC: sub     eax, edx
0x7A64CE: cmp     ecx, eax
0x7A64D0: jb      short loc_7A6539
0x7A64D2: call    __invalid_parameter_noinfo
0x7A64D7: jmp     short loc_7A6539
0x7A64D9: mov     ecx, esi; jumptable 007A6499 cases 3004,3005
0x7A64DB: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A64E0: fstp    st
0x7A64E2: jmp     short loc_7A6539
0x7A64E4: mov     edi, [esi]; File_Leaf_Dimming (3009): Oblivion consumes one raw bool byte and stores the nonzero value into SIdvLeafInfo+0x00.
0x7A64E6: lea     eax, [edi+1]
0x7A64E9: mov     [esi], eax
0x7A64EB: mov     ecx, [esi+8]
0x7A64EE: cmp     ecx, ebx
0x7A64F0: jz      short loc_7A64FB
0x7A64F2: mov     eax, [esi+0Ch]
0x7A64F5: sub     eax, ecx
0x7A64F7: cmp     edi, eax
0x7A64F9: jb      short loc_7A6500
0x7A64FB: call    __invalid_parameter_noinfo
0x7A6500: mov     ecx, [esi+8]
0x7A6503: cmp     [edi+ecx], bl
0x7A6506: setnz   dl
0x7A6509: mov     [ebp+0], dl
0x7A650C: jmp     short loc_7A6539
0x7A650E: mov     ecx, esi; jumptable 007A6499 case 3010
0x7A6510: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A6515: fstp    dword ptr [ebp+4]
0x7A6518: jmp     short loc_7A6539
0x7A651A: mov     ecx, [esi]; File_Leaf_Lit (3006): Oblivion consumes exactly one raw bool byte through the same bounds path as 3003.
0x7A651C: lea     eax, [ecx+1]
0x7A651F: mov     [esi], eax
0x7A6521: jmp     short loc_7A64C2
0x7A6523: mov     ecx, esi; jumptable 007A6499 case 3007
0x7A6525: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A652A: fstp    dword ptr [ebp+20h]
0x7A652D: jmp     short loc_7A6539
0x7A652F: mov     ecx, esi; jumptable 007A6499 case 3008
0x7A6531: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A6536: mov     [ebp+0Ch], eax
0x7A6539: mov     ecx, esi; this
0x7A653B: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A6540: cmp     eax, 3EDh
0x7A6545: jnz     loc_7A6071
0x7A654B: mov     ecx, [esp+19Ch+var_C]
0x7A6552: mov     large fs:0, ecx
0x7A6559: pop     ecx
0x7A655A: pop     edi
0x7A655B: pop     esi
0x7A655C: pop     ebp
0x7A655D: pop     ebx
0x7A655E: mov     ecx, [esp+188h+var_10]
0x7A6565: xor     ecx, esp
0x7A6567: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A656C: add     esp, 188h
0x7A6572: retn    4
0x7A6575: push    21h ; '!'; Parser switch default for an unknown single-leaf token. This block uses the live SIdvLeafInfo::Parse frame and throws 'malformed single leaf information'; it is a parser tail chunk, not a standalone function.
0x7A6577: push    offset aMalformedSingl; "malformed single leaf information"
0x7A657C: lea     ecx, [esp+1A4h+details]; this
0x7A6583: mov     [esp+1A4h+details.capacity], ebp
0x7A658A: mov     [esp+1A4h+details.size], ebx
0x7A6591: mov     byte ptr [esp+1A4h+details.storage], bl
0x7A6598: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A659D: push    ebx; appendSystemError
0x7A659E: lea     ecx, [esp+1A0h+details]
0x7A65A5: push    ecx; details
0x7A65A6: lea     ecx, [esp+1A4h+outVec3+0Ch]; this
0x7A65AD: mov     byte ptr [esp+1A4h+var_4], 4
0x7A65B5: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A65BA: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A65BF: lea     edx, [esp+1A0h+outVec3+0Ch]
0x7A65C6: push    edx
0x7A65C7: call    ThrowException??
0x7A65CC: push    22h ; '"'; jumptable 007A6499 default case
0x7A65CE: push    offset aMalformedGen_0; "malformed general leaf information"
0x7A65D3: lea     ecx, [esp+1A4h+var_124]; this
0x7A65DA: mov     [esp+1A4h+var_124.capacity], 0Fh
0x7A65E5: mov     [esp+1A4h+var_124.size], ebx
0x7A65EC: mov     byte ptr [esp+1A4h+var_124.storage], bl
0x7A65F3: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A65F8: push    ebx; appendSystemError
0x7A65F9: lea     eax, [esp+1A0h+var_124]
0x7A65FD: push    eax; details
0x7A65FE: lea     ecx, [esp+1A4h+var_8C]; this
0x7A6605: mov     [esp+1A4h+var_4], 5
0x7A6610: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A6615: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A661A: lea     ecx, [esp+1A0h+var_8C]
0x7A6621: push    ecx
0x7A6622: call    ThrowException??
0x7A25F0: push    esi
0x7A25F1: mov     esi, ecx
0x7A25F3: cmp     dword ptr [esi+2Ch], 10h
0x7A25F7: jb      short loc_7A2605
0x7A25F9: mov     eax, [esi+18h]
0x7A25FC: push    eax
0x7A25FD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A2602: add     esp, 4
0x7A2605: xor     eax, eax
0x7A2607: mov     dword ptr [esi+2Ch], 0Fh
0x7A260E: mov     [esi+28h], eax
0x7A2611: mov     [esi+18h], al
0x7A2614: pop     esi
0x7A2615: retn
0x9CCC70: lea     ecx, [ebp-64h]
0x9CCC73: jmp     loc_7A25F0
0x9CCC78: lea     ecx, [ebp-15Ch]; this
0x9CCC7E: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCC83: lea     ecx, [ebp-178h]; this
0x9CCC89: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCC8E: lea     ecx, [ebp-140h]; this
0x9CCC94: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCC99: lea     ecx, [ebp-108h]; this
0x9CCC9F: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCCA4: lea     ecx, [ebp-124h]; this
0x9CCCAA: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCCAF: mov     edx, [esp+arg_4]
0x9CCCB3: lea     eax, [edx-18Ch]
0x9CCCB9: mov     ecx, [edx-190h]
0x9CCCBF: xor     ecx, eax
0x9CCCC1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCCC6: add     eax, 10h
0x9CCCC9: mov     ecx, [edx-4]
0x9CCCCC: xor     ecx, eax
0x9CCCCE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCCD3: mov     eax, offset stru_AF6074
0x9CCCD8: jmp     ___CxxFrameHandler3
