0x41E710: push    0FFFFFFFFh; Set ExtraOriginalReference (type 0x26) to a live TESObjectREFR. This provenance is used for synthetic/reference projections, is excluded by relevant copy paths, and is never interpreted by pickup as a base-form override.
0x41E712: push    offset ExtraDataList_SetReferencePointer_SEH
0x41E717: mov     eax, large fs:0
0x41E71D: push    eax
0x41E71E: push    esi
0x41E71F: push    edi
0x41E720: mov     eax, ___security_cookie
0x41E725: xor     eax, esp
0x41E727: push    eax
0x41E728: lea     eax, [esp+18h+var_C]
0x41E72C: mov     large fs:0, eax
0x41E732: mov     esi, ecx
0x41E734: push    26h ; '&'; a2
0x41E736: call    BaseExtraList_GetExtraData
0x41E73B: test    eax, eax
0x41E73D: mov     edi, [esp+18h+originalReference]
0x41E741: jz      short loc_41E746
0x41E743: mov     [eax+0Ch], edi
0x41E746: push    10h; Size
0x41E748: call    FormHeapAlloc
0x41E74D: add     esp, 4
0x41E750: mov     [esp+18h+originalReference], eax
0x41E754: test    eax, eax
0x41E756: mov     [esp+18h+var_4], 0
0x41E75E: jz      short loc_41E76A
0x41E760: push    edi; originalReference
0x41E761: mov     ecx, eax; this
0x41E763: call    ExtraOriginalReference_ctor; Construct 0x10-byte ExtraOriginalReference: BSExtraData header/type 0x26 plus original TESObjectREFR pointer at +0x0C.
0x41E768: jmp     short loc_41E76C
0x41E76A: xor     eax, eax
0x41E76C: push    eax; BSExtraData *
0x41E76D: mov     ecx, esi; ExtraDataList *
0x41E76F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41E777: call    BaseExtraList_AddExtra
0x41E77C: mov     ecx, [esp+18h+var_C]
0x41E780: mov     large fs:0, ecx
0x41E787: pop     ecx
0x41E788: pop     edi
0x41E789: pop     esi
0x41E78A: add     esp, 0Ch
0x41E78D: retn    4
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
