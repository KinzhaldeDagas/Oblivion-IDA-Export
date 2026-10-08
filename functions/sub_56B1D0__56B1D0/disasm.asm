0x56B1D0: mov     ecx, [esp+functionIndex]; Looks up Script_CommandList[functionIndex]. If paramIndex exists and its ParamInfo type is ObjectReferenceID (4) or Actor (6), a missing condition param1 may fall back to the current resolved/swapped target. Other types (Quest, Global, Class, Race, Sex, etc.) do not use this target fallback.
0x56B1D4: xor     al, al
0x56B1D6: cmp     ecx, 171h
0x56B1DC: jnb     short locret_56B211
0x56B1DE: mov     edx, [esp+paramIndex]
0x56B1E2: lea     ecx, [ecx+ecx*4]
0x56B1E5: add     ecx, ecx
0x56B1E7: add     ecx, ecx
0x56B1E9: add     ecx, ecx
0x56B1EB: push    esi
0x56B1EC: movzx   esi, ds:Script_CommandList.numParams[ecx]
0x56B1F3: cmp     edx, esi
0x56B1F5: pop     esi
0x56B1F6: jnb     short locret_56B211
0x56B1F8: mov     ecx, ds:Script_CommandList.params[ecx]
0x56B1FE: lea     edx, [edx+edx*2]
0x56B201: mov     ecx, [ecx+edx*4+4]
0x56B205: sub     ecx, 4
0x56B208: jz      short loc_56B20F
0x56B20A: sub     ecx, 2
0x56B20D: jnz     short locret_56B211; Bounds check against Script_CommandList's 0x171 (369) rows before reading the opcode's ParamInfo metadata.
0x56B20F: mov     al, 1; Only ObjectReferenceID and Actor ParamInfo types request a target fallback for missing param1; Quest/Global/Form-specific condition parameters remain null.
0x56B211: retn
