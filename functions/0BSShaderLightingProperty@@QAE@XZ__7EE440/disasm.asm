0x7EE440: push    0FFFFFFFFh; [Verified] DECAL_DATA is 0x4C bytes: NiSourceTexture* +0, rotation matrix +8, target reference FormID +0x3C, fade progress +0x40, and NiProperty* +0x48. Fields +4, +0x2C, +0x38 and +0x44 remain Unknown. The property owns a NiTPointerList<DECAL_DATA*> at +0x80; effects add/remove entries and render-pass builders batch from count +0x8C.
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
0x7EE487: mov     dword ptr [ecx], offset ??_7?$NiTPointerList@PAVShadowSceneLight@@@@6B@; MEF PERF 2026-10-07 PASS4: LC-1 layout evidence: constructor initializes raw ShadowSceneLight pointer-list vtable at lighting-property+6C, DWORD count+78 and head+70/tail+74. Cursor+7C initialized separately7EE4AE. These fields lie in lighting extension beyond the existing6Ch BSShaderProperty base; base type was not resized.
0x7EE48D: lea     edi, [esi+80h]
0x7EE493: mov     [edi+0Ch], ebx
0x7EE496: mov     [edi+4], ebx
0x7EE499: mov     [edi+8], ebx
0x7EE49C: mov     dword ptr [edi], offset ??_7?$NiTPointerList@PAUDECAL_DATA@@@@6B@; [Verified] BSShaderLightingProperty constructor initializes a NiTPointerList<DECAL_DATA*> at +0x80: vtable, head, tail and item count (+0x8C). This count drives decal pass batching.
0x7EE4A2: mov     byte ptr [esp+20h+var_4], 2
0x7EE4A7: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7EE4AC: mov     ecx, edi
0x7EE4AE: mov     [esi+7Ch], ebx
0x7EE4B1: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7EE4B6: fld1
0x7EE4B8: fstp    dword ptr [esi+94h]; OBLIVION AUTHORITY (2026-08-24): BSShaderLightingProperty constructor initializes per-property light dimmer at +0x94 to 1.0f. DrawRenderPass 0x7A9820 passes this scalar into each light constant update.
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
0x9CFBB0: mov     ecx, [ebp-10h]; this
0x9CFBB3: jmp     ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x9CFBB8: mov     ecx, [ebp-10h]
0x9CFBBB: add     ecx, 6Ch ; 'l'
0x9CFBBE: jmp     j_??1?$NiTPointerList@PAVShadowSceneLight@@@@UAE@XZ; NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(void)
0x9CFBC3: mov     ecx, [ebp-10h]
0x9CFBC6: add     ecx, 80h ; '€'
0x9CFBCC: jmp     j_??1?$NiTPointerList@PAUDECAL_DATA@@@@UAE@XZ; NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(void)
0x9CFBD1: mov     edx, [esp+arg_4]
0x9CFBD5: lea     eax, [edx-10h]
0x9CFBD8: mov     ecx, [edx-14h]
0x9CFBDB: xor     ecx, eax
0x9CFBDD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFBE2: mov     eax, offset stru_AF871C
0x9CFBE7: jmp     ___CxxFrameHandler3
