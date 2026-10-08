0x67E160: sub     esp, 20h; Verified direct-segment test used before actor-aware A*. It locates PathGrid nodes near both endpoints, rejects/defers segments based on distance, water-state mismatch and actor collision-height checks, and reports whether graph fallback should be attempted. Exact meaning of several geometric thresholds remains Unknown.
0x67E163: push    ebx
0x67E164: push    esi
0x67E165: mov     esi, ecx
0x67E167: fld     dword ptr [esi]
0x67E169: xor     ebx, ebx
0x67E16B: fld     dword ptr ds:0B15450h
0x67E171: fucompp
0x67E173: fnstsw  ax
0x67E175: test    ah, 44h
0x67E178: jp      short loc_67E1A2
0x67E17A: fld     dword ptr [esi+4]
0x67E17D: fld     dword ptr ds:0B15454h
0x67E183: fucompp
0x67E185: fnstsw  ax
0x67E187: test    ah, 44h
0x67E18A: jp      short loc_67E1A2
0x67E18C: fld     dword ptr [esi+8]
0x67E18F: fld     dword ptr ds:0B15458h
0x67E195: fucompp
0x67E197: fnstsw  ax
0x67E199: test    ah, 44h
0x67E19C: jnp     loc_67E3B9
0x67E1A2: push    edi
0x67E1A3: lea     edi, [esi+0Ch]
0x67E1A6: push    offset stru_B15450; other
0x67E1AB: mov     ecx, edi; this
0x67E1AD: call    NiPoint3__NotEqual; Exact component-wise NiPoint3 inequality test; returns true when any of x/y/z differs.
0x67E1B2: test    al, al
0x67E1B4: jz      loc_67E3A2
0x67E1BA: push    ebp
0x67E1BB: mov     ebp, [esp+30h+actor]
0x67E1BF: cmp     ebp, ebx
0x67E1C1: jz      loc_67E3AD
0x67E1C7: mov     ecx, ebp; this
0x67E1C9: call    sub_4D8B90
0x67E1CE: test    al, al
0x67E1D0: jnz     short loc_67E1F6
0x67E1D2: mov     ecx, ds:0B333A0h
0x67E1D8: push    esi
0x67E1D9: call    sub_43F840
0x67E1DE: test    al, al
0x67E1E0: jnz     short loc_67E1F6
0x67E1E2: mov     ecx, ds:0B333A0h
0x67E1E8: push    edi
0x67E1E9: call    sub_43F840
0x67E1EE: test    al, al
0x67E1F0: jz      loc_67E38D
0x67E1F6: mov     al, [esi+18h]
0x67E1F9: cmp     al, bl
0x67E1FB: setz    al
0x67E1FE: push    ebx; excludedPoints
0x67E1FF: push    eax; pathMode
0x67E200: push    ebp; actor
0x67E201: push    esi; position
0x67E202: call    TESPathGrid_FindNearestReachablePointForActor; Verified actor-aware PathGrid point selection. For a placed reference, builds a temporary graph node at the requested position, attaches below-water and SubSpace flags, and asks that cell's PathGrid for the best reachable candidate. For exterior coordinates, searches the loaded cell grid; when the position is in the active world's loaded neighborhood, compares actor-aware candidates from the containing and adjacent cell PathGrids. It may reduce cost for candidates with the extra reachability result; exact meaning of that mode remains Candidate.
0x67E207: mov     [esi+1Ch], eax
0x67E20A: mov     al, [esi+18h]
0x67E20D: cmp     al, bl
0x67E20F: setz    cl
0x67E212: push    ebx; excludedPoints
0x67E213: push    ecx; pathMode
0x67E214: push    ebp; actor
0x67E215: push    edi; position
0x67E216: call    TESPathGrid_FindNearestReachablePointForActor; Verified actor-aware PathGrid point selection. For a placed reference, builds a temporary graph node at the requested position, attaches below-water and SubSpace flags, and asks that cell's PathGrid for the best reachable candidate. For exterior coordinates, searches the loaded cell grid; when the position is in the active world's loaded neighborhood, compares actor-aware candidates from the containing and adjacent cell PathGrids. It may reduce cost for candidates with the extra reachability result; exact meaning of that mode remains Candidate.
0x67E21B: mov     ecx, [esi+1Ch]; this
0x67E21E: add     esp, 20h
0x67E221: cmp     ecx, ebx
0x67E223: mov     [esi+20h], eax
0x67E226: mov     [esi+28h], ebp
0x67E229: jz      loc_67E38D
0x67E22F: cmp     eax, ebx
0x67E231: jz      loc_67E38D
0x67E237: cmp     ecx, eax
0x67E239: jz      loc_67E38D
0x67E23F: call    PathGraphNode_GetPosition; Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
0x67E244: push    eax
0x67E245: lea     edx, [esp+34h+var_C]
0x67E249: push    edx
0x67E24A: mov     ecx, esi
0x67E24C: call    sub_4121A0
0x67E251: mov     ecx, eax
0x67E253: call    sub_47DA40
0x67E258: fstp    [esp+30h+var_20]
0x67E25C: mov     ecx, [esi+20h]; this
0x67E25F: call    PathGraphNode_GetPosition; Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
0x67E264: push    eax
0x67E265: lea     eax, [esp+34h+var_C]
0x67E269: push    eax
0x67E26A: mov     ecx, edi
0x67E26C: call    sub_4121A0
0x67E271: mov     ecx, eax
0x67E273: call    sub_47DA40
0x67E278: fstp    [esp+30h+var_1C]
0x67E27C: push    edi
0x67E27D: lea     ecx, [esp+34h+var_C]
0x67E281: push    ecx
0x67E282: mov     ecx, esi
0x67E284: call    sub_4121A0
0x67E289: mov     ecx, eax
0x67E28B: call    sub_47DA40
0x67E290: fstp    [esp+30h+actor]
0x67E294: cmp     [esp+30h+strictMode], bl
0x67E298: fld     [esp+30h+var_20]
0x67E29C: fld     [esp+30h+var_1C]
0x67E2A0: jz      short loc_67E2CC
0x67E2A2: fld     dword ptr ds:0A4CAE0h
0x67E2A8: fcom    st(2)
0x67E2AA: fnstsw  ax
0x67E2AC: test    ah, 41h
0x67E2AF: jnz     short loc_67E2CA
0x67E2B1: fcomp   st(1)
0x67E2B3: fnstsw  ax
0x67E2B5: test    ah, 41h
0x67E2B8: jnz     short loc_67E2CC
0x67E2BA: fstp    st(1)
0x67E2BC: fstp    st
0x67E2BE: pop     ebp
0x67E2BF: pop     edi
0x67E2C0: pop     esi
0x67E2C1: mov     al, 1
0x67E2C3: pop     ebx
0x67E2C4: add     esp, 20h
0x67E2C7: retn    8
0x67E2CA: fstp    st
0x67E2CC: fld     qword ptr ds:0A748C8h
0x67E2D2: fcom    st(2)
0x67E2D4: fnstsw  ax
0x67E2D6: test    ah, 41h
0x67E2D9: jnz     short loc_67E2E6
0x67E2DB: fcomp   st(1)
0x67E2DD: fnstsw  ax
0x67E2DF: test    ah, 41h
0x67E2E2: jz      short loc_67E2BA
0x67E2E4: jmp     short loc_67E2E8
0x67E2E6: fstp    st
0x67E2E8: faddp   st(1), st
0x67E2EA: fld     [esp+30h+actor]
0x67E2EE: fcompp
0x67E2F0: fnstsw  ax
0x67E2F2: test    ah, 41h
0x67E2F5: jz      short loc_67E2BE
0x67E2F7: mov     ecx, [esi+20h]; this
0x67E2FA: call    GraphNode_IsBelowWaterFlagSet; Verified returns stateFlags bit 0x08, the PathGrid loader's below-water point flag.
0x67E2FF: mov     ecx, [esi+1Ch]; this
0x67E302: mov     bl, al
0x67E304: call    GraphNode_IsBelowWaterFlagSet; Verified returns stateFlags bit 0x08, the PathGrid loader's below-water point flag.
0x67E309: cmp     al, bl
0x67E30B: jnz     short loc_67E2BE
0x67E30D: fld     [esp+30h+actor]
0x67E311: fcomp   qword ptr ds:0A47CA8h
0x67E317: fnstsw  ax
0x67E319: test    ah, 5
0x67E31C: jp      short loc_67E38B
0x67E31E: mov     ecx, ebp
0x67E320: call    Actor_GetScaledCollisionHeight; Returns (localBoundMax.z - localBoundMin.z) * reference scale.
0x67E325: fmul    qword ptr ds:0A2FAA0h
0x67E32B: mov     ecx, [esi+8]
0x67E32E: mov     edx, [esi]
0x67E330: mov     eax, [esi+4]
0x67E333: fstp    dword ptr [esp+30h+strictMode]
0x67E337: mov     [esp+30h+var_4], ecx
0x67E33B: fld     [esp+30h+var_4]
0x67E33F: fld     dword ptr [esp+30h+strictMode]
0x67E343: mov     ecx, [edi+8]
0x67E346: fld     st
0x67E348: mov     [esp+30h+var_C], edx
0x67E34C: mov     edx, [edi]
0x67E34E: faddp   st(2), st
0x67E350: mov     [esp+30h+var_8], eax
0x67E354: fxch    st(1)
0x67E356: mov     eax, [edi+4]
0x67E359: fstp    [esp+30h+var_4]
0x67E35D: mov     [esp+30h+var_18], edx
0x67E361: mov     [esp+30h+var_10], ecx
0x67E365: fadd    [esp+30h+var_10]
0x67E369: lea     edx, [esp+30h+var_18]
0x67E36D: mov     [esp+30h+var_14], eax
0x67E371: push    edx
0x67E372: lea     eax, [esp+34h+var_C]
0x67E376: fstp    [esp+34h+var_10]
0x67E37A: push    eax
0x67E37B: call    sub_6859A0
0x67E380: add     esp, 8
0x67E383: test    al, al
0x67E385: jz      loc_67E2BE
0x67E38B: xor     ebx, ebx
0x67E38D: pop     ebp
0x67E38E: pop     edi
0x67E38F: mov     [esi+1Ch], ebx
0x67E392: mov     [esi+20h], ebx
0x67E395: mov     [esi+28h], ebx
0x67E398: pop     esi
0x67E399: xor     al, al
0x67E39B: pop     ebx
0x67E39C: add     esp, 20h
0x67E39F: retn    8
0x67E3A2: pop     edi
0x67E3A3: pop     esi
0x67E3A4: mov     al, bl
0x67E3A6: pop     ebx
0x67E3A7: add     esp, 20h
0x67E3AA: retn    8
0x67E3AD: pop     ebp
0x67E3AE: pop     edi
0x67E3AF: pop     esi
0x67E3B0: mov     al, bl
0x67E3B2: pop     ebx
0x67E3B3: add     esp, 20h
0x67E3B6: retn    8
0x67E3B9: pop     esi
0x67E3BA: mov     al, bl
0x67E3BC: pop     ebx
0x67E3BD: add     esp, 20h
0x67E3C0: retn    8
