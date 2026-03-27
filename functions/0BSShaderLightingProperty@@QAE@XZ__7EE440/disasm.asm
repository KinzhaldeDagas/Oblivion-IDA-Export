0x7EE440: push    0FFFFFFFFh
0x7EE442: push    offset ??0BSShaderLightingProperty@@QAE@XZ_SEH
0x7EE447: mov     eax, large fs:0
0x7EE44D: push    eax
0x7EE44E: push    ecx
0x7EE44F: push    ebx
0x7EE450: push    esi
0x7EE451: push    edi
0x7EE452: mov     eax, ds:0B30AACh
0x7EE457: xor     eax, esp
0x7EE459: push    eax
0x7EE45A: lea     eax, [esp+20h+var_C]
0x7EE45E: mov     large fs:0, eax
0x7EE464: mov     esi, ecx
0x7EE466: mov     [esp+20h+var_10], esi
0x7EE46A: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7EE46F: xor     ebx, ebx
0x7EE471: lea     ecx, [esi+6Ch]
0x7EE474: mov     dword ptr [esi], offset ??_7BSShaderLightingProperty@@6B@; const BSShaderLightingProperty::`vftable'
0x7EE47A: mov     [esp+20h+var_4], ebx
0x7EE47E: mov     [ecx+0Ch], ebx
0x7EE481: mov     [ecx+4], ebx
0x7EE484: mov     [ecx+8], ebx
0x7EE487: mov     dword ptr [ecx], offset ??_7?$NiTPointerList@PAVShadowSceneLight@@@@6B@; const NiTPointerList<ShadowSceneLight *>::`vftable'
0x7EE48D: lea     edi, [esi+80h]
0x7EE493: mov     [edi+0Ch], ebx
0x7EE496: mov     [edi+4], ebx
0x7EE499: mov     [edi+8], ebx
0x7EE49C: mov     dword ptr [edi], offset ??_7?$NiTPointerList@PAUDECAL_DATA@@@@6B@; const NiTPointerList<DECAL_DATA *>::`vftable'
0x7EE4A2: mov     byte ptr [esp+20h+var_4], 2
0x7EE4A7: call    NiTPointerList__FreeAllNodes
0x7EE4AC: mov     ecx, edi
0x7EE4AE: mov     [esi+7Ch], ebx
0x7EE4B1: call    NiTPointerList__FreeAllNodes
0x7EE4B6: fld1
0x7EE4B8: fstp    dword ptr [esi+94h]
0x7EE4BE: mov     [esi+90h], ebx
0x7EE4C4: mov     [esi+98h], ebx
0x7EE4CA: mov     eax, esi
0x7EE4CC: mov     ecx, [esp+20h+var_C]
0x7EE4D0: mov     large fs:0, ecx
0x7EE4D7: pop     ecx
0x7EE4D8: pop     edi
0x7EE4D9: pop     esi
0x7EE4DA: pop     ebx
0x7EE4DB: add     esp, 10h
0x7EE4DE: retn
