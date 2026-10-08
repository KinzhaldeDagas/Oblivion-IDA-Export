0x7F1DB0: push    0FFFFFFFFh; Build leaf auxiliary input stream: one float4 per vertex, stride 0x10. Stock builder field z contains integer LeafBase selector plus packed-green fractional dimmer.
0x7F1DB2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7F1DB7: mov     eax, large fs:0
0x7F1DBD: push    eax
0x7F1DBE: push    ecx
0x7F1DBF: push    ebx
0x7F1DC0: push    esi
0x7F1DC1: push    edi
0x7F1DC2: mov     eax, ds:0B30AACh
0x7F1DC7: xor     eax, esp
0x7F1DC9: push    eax
0x7F1DCA: lea     eax, [esp+20h+var_C]
0x7F1DCE: mov     large fs:0, eax
0x7F1DD4: mov     edi, ecx
0x7F1DD6: mov     eax, [edi]
0x7F1DD8: mov     edx, [eax+70h]
0x7F1DDB: call    edx
0x7F1DDD: push    2Ch ; ','; Size
0x7F1DDF: mov     ebx, eax
0x7F1DE1: call    FormHeapAlloc
0x7F1DE6: add     esp, 4
0x7F1DE9: mov     [esp+20h+var_10], eax
0x7F1DED: test    eax, eax
0x7F1DEF: mov     [esp+20h+var_4], 0
0x7F1DF7: jz      short loc_7F1E07
0x7F1DF9: push    1
0x7F1DFB: push    ebx
0x7F1DFC: mov     ecx, eax
0x7F1DFE: call    sub_7E3AE0
0x7F1E03: mov     esi, eax
0x7F1E05: jmp     short loc_7F1E09
0x7F1E07: xor     esi, esi
0x7F1E09: push    1
0x7F1E0B: mov     ecx, esi
0x7F1E0D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F1E15: call    OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0
0x7F1E1A: mov     edx, [edi]
0x7F1E1C: mov     eax, ebx
0x7F1E1E: shl     eax, 4
0x7F1E21: push    0; copyData
0x7F1E23: push    eax; byteCount
0x7F1E24: mov     eax, [edx+6Ch]
0x7F1E27: mov     ecx, edi
0x7F1E29: call    eax
0x7F1E2B: push    eax; data
0x7F1E2C: push    0; blockIndex
0x7F1E2E: mov     ecx, esi; this
0x7F1E30: call    OB_NiAdditionalGeometryData_SetDataBlock_010201A0
0x7F1E35: push    10h; stride
0x7F1E37: push    10h; elementSize
0x7F1E39: push    ebx; vertexCount
0x7F1E3A: push    4; type
0x7F1E3C: push    0; blockOffset
0x7F1E3E: push    0; blockIndex
0x7F1E40: push    0; streamIndex
0x7F1E42: mov     ecx, esi; this
0x7F1E44: call    OB_NiAdditionalGeometryData_SetDataStream_010201A0; Declare the four-component 0x10-stride auxiliary stream which the Oblivion leaf program declaration consumes as BLENDINDICES v3.
0x7F1E49: mov     eax, esi
0x7F1E4B: mov     ecx, [esp+20h+var_C]
0x7F1E4F: mov     large fs:0, ecx
0x7F1E56: pop     ecx
0x7F1E57: pop     edi
0x7F1E58: pop     esi
0x7F1E59: pop     ebx
0x7F1E5A: add     esp, 10h
0x7F1E5D: retn    4
0x9CA420: mov     eax, [ebp-10h]
0x9CA423: push    eax
0x9CA424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA429: pop     ecx
0x9CA42A: retn
0x9CA42B: mov     edx, [esp+arg_4]
0x9CA42F: lea     eax, [edx-10h]
0x9CA432: mov     ecx, [edx-14h]
0x9CA435: xor     ecx, eax
0x9CA437: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA43C: mov     eax, offset stru_AF2B24
0x9CA441: jmp     ___CxxFrameHandler3
