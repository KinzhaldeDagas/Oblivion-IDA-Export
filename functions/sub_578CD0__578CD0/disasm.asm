0x578CD0: push    1; arg1
0x578CD2: push    0; canCreate
0x578CD4: call    InterfaceManager_GetSingleton
0x578CD9: add     esp, 8
0x578CDC: mov     ecx, eax
0x578CDE: jmp     loc_57E510
0x57E510: push    0FFFFFFFFh
0x57E512: push    offset loc_9BEA2C
0x57E517: mov     eax, large fs:0
0x57E51D: push    eax
0x57E51E: sub     esp, 34h
0x57E521: push    ebx
0x57E522: push    ebp
0x57E523: push    esi
0x57E524: push    edi
0x57E525: mov     eax, ds:0B30AACh
0x57E52A: xor     eax, esp
0x57E52C: push    eax
0x57E52D: lea     eax, [esp+54h+var_C]
0x57E531: mov     large fs:0, eax
0x57E537: mov     ebp, ecx
0x57E539: push    0DCh ; 'Ü'; Size
0x57E53E: call    FormHeapAlloc
0x57E543: add     esp, 4
0x57E546: mov     [esp+54h+var_40], eax
0x57E54A: test    eax, eax
0x57E54C: mov     [esp+54h+var_4], 0
0x57E554: jz      short loc_57E561
0x57E556: push    0
0x57E558: mov     ecx, eax; this
0x57E55A: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x57E55F: jmp     short loc_57E563
0x57E561: xor     eax, eax
0x57E563: fld     dword ptr ds:0A68FCCh
0x57E569: sub     esp, 0Ch
0x57E56C: fstp    [esp+60h+var_58]; float
0x57E570: lea     ecx, [esp+60h+var_30]
0x57E574: fldz
0x57E576: mov     [esp+60h+var_4], 0FFFFFFFFh
0x57E57E: fst     [esp+60h+var_5C]; float
0x57E582: mov     [ebp+60h], eax
0x57E585: fstp    [esp+60h+var_60]; float
0x57E588: call    sub_711580
0x57E58D: mov     eax, [ebp+60h]
0x57E590: lea     edi, [eax+30h]
0x57E593: mov     ecx, 9
0x57E598: lea     esi, [esp+54h+var_30]
0x57E59C: push    130h; Size
0x57E5A1: rep movsd
0x57E5A3: call    FormHeapAlloc
0x57E5A8: add     esp, 4
0x57E5AB: mov     [esp+54h+var_40], eax
0x57E5AF: test    eax, eax
0x57E5B1: mov     ebx, 1
0x57E5B6: mov     [esp+54h+var_4], ebx
0x57E5BA: jz      short loc_57E5C5
0x57E5BC: mov     ecx, eax; this
0x57E5BE: call    ??0ShadowSceneNode@@QAE@XZ; ShadowSceneNode constructor. Initializes full list (+0xE4..+0xF0), active list (+0xF4..+0x100), iterator/partition anchors, and persistent lights at +0x110/+0x114.
0x57E5C3: jmp     short loc_57E5C7
0x57E5C5: xor     eax, eax
0x57E5C7: push    eax
0x57E5C8: or      edi, 0FFFFFFFFh
0x57E5CB: mov     [ebp+64h], eax
0x57E5CE: push    ebx
0x57E5CF: mov     [esp+5Ch+var_4], edi
0x57E5D3: mov     [eax+11Ch], bl
0x57E5D9: call    sub_7B4270
0x57E5DE: push    1Ch; Size
0x57E5E0: call    FormHeapAlloc
0x57E5E5: mov     esi, eax
0x57E5E7: add     esp, 0Ch
0x57E5EA: mov     [esp+54h+var_40], esi
0x57E5EE: test    esi, esi
0x57E5F0: mov     [esp+54h+var_4], 2
0x57E5F8: jz      short loc_57E613
0x57E5FA: mov     ecx, esi; this
0x57E5FC: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x57E601: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x57E607: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x57E60D: mov     byte ptr [esi+1Ah], 0
0x57E611: jmp     short loc_57E615
0x57E613: xor     esi, esi
0x57E615: and     word ptr [esi+18h], 0FFFEh
0x57E61B: mov     ecx, [ebp+64h]; this
0x57E61E: push    esi; a2
0x57E61F: mov     [esp+58h+var_4], edi
0x57E623: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x57E628: push    114h; Size
0x57E62D: call    FormHeapAlloc
0x57E632: add     esp, 4
0x57E635: mov     [esp+54h+var_40], eax
0x57E639: test    eax, eax
0x57E63B: mov     [esp+54h+var_4], 3
0x57E643: jz      short loc_57E64E
0x57E645: mov     ecx, eax
0x57E647: call    sub_719760
0x57E64C: jmp     short loc_57E650
0x57E64E: xor     eax, eax
0x57E650: push    offset aPlayerscenelig; "PlayerSceneLight"
0x57E655: mov     ecx, eax
0x57E657: mov     [esp+58h+var_4], edi
0x57E65B: mov     [ebp+18h], eax
0x57E65E: call    NiObjectNET_SetName; Name the interface-scene backing light PlayerSceneLight; this is later wrapped at ShadowSceneNode+0x118.
0x57E663: fld     dword ptr ds:0B135E0h
0x57E669: mov     eax, [ebp+18h]
0x57E66C: fstp    [esp+54h+var_3C]
0x57E670: fld     dword ptr ds:0B135E8h
0x57E676: mov     ecx, [esp+54h+var_3C]
0x57E67A: fstp    [esp+54h+var_38]
0x57E67E: mov     edx, [esp+54h+var_38]
0x57E682: fld     dword ptr ds:0B135F0h
0x57E688: add     [eax+0B8h], ebx
0x57E68E: mov     [eax+0ECh], ecx
0x57E694: fstp    [esp+54h+var_34]
0x57E698: mov     ecx, [esp+54h+var_34]
0x57E69C: mov     [eax+0F0h], edx
0x57E6A2: mov     [eax+0F4h], ecx
0x57E6A8: fld     dword ptr ds:0B135C8h
0x57E6AE: mov     eax, [ebp+18h]
0x57E6B1: fstp    [esp+54h+var_3C]
0x57E6B5: fld     dword ptr ds:0B135D0h
0x57E6BB: mov     edx, [esp+54h+var_3C]
0x57E6BF: fstp    [esp+54h+var_38]
0x57E6C3: mov     ecx, [esp+54h+var_38]
0x57E6C7: fld     dword ptr ds:0B135D8h
0x57E6CD: add     [eax+0B8h], ebx
0x57E6D3: fstp    [esp+54h+var_34]
0x57E6D7: sub     esp, 0Ch
0x57E6DA: fld     dword ptr ds:0A68FB4h
0x57E6E0: mov     [eax+0E0h], edx
0x57E6E6: mov     edx, [esp+60h+var_34]
0x57E6EA: fst     [esp+60h+var_58]; float
0x57E6EE: mov     [eax+0E4h], ecx
0x57E6F4: fst     [esp+60h+var_5C]; float
0x57E6F8: lea     ecx, [esp+60h+var_30]
0x57E6FC: fstp    [esp+60h+var_60]; float
0x57E6FF: mov     [eax+0E8h], edx
0x57E705: call    sub_711580
0x57E70A: mov     edi, [ebp+18h]
0x57E70D: add     edi, 30h ; '0'
0x57E710: mov     ecx, 9
0x57E715: lea     esi, [esp+54h+var_30]
0x57E719: rep movsd
0x57E71B: mov     ecx, [ebp+64h]
0x57E71E: mov     eax, [ecx]
0x57E720: mov     edx, [ebp+18h]
0x57E723: mov     eax, [eax+84h]
0x57E729: push    ebx
0x57E72A: push    edx
0x57E72B: call    eax
0x57E72D: mov     ecx, [ebp+18h]
0x57E730: push    ecx; backingLight
0x57E731: mov     ecx, [ebp+64h]; self
0x57E734: call    ShadowSceneNode_RecreateLightLevelReference; Create/replace the interface ShadowSceneNode+0x118 light-level reference wrapper using PlayerSceneLight.
0x57E739: mov     ecx, [ebp+4]
0x57E73C: mov     edx, [ecx]
0x57E73E: mov     eax, [ebp+64h]
0x57E741: mov     edx, [edx+84h]
0x57E747: push    0
0x57E749: push    eax
0x57E74A: call    edx
0x57E74C: mov     ecx, [ebp+64h]
0x57E74F: mov     eax, [ecx]
0x57E751: mov     edx, [ebp+60h]
0x57E754: mov     eax, [eax+84h]
0x57E75A: push    0
0x57E75C: push    edx
0x57E75D: call    eax
0x57E75F: push    2
0x57E761: lea     ecx, [esp+58h+var_40]
0x57E765: push    ecx
0x57E766: mov     ecx, [ebp+60h]
0x57E769: call    sub_708560
0x57E76E: mov     eax, [esp+54h+var_40]
0x57E772: test    eax, eax
0x57E774: jz      short loc_57E793
0x57E776: mov     esi, eax
0x57E778: add     eax, 4
0x57E77B: push    eax; lpAddend
0x57E77C: call    dword ptr ds:0A2807Ch
0x57E782: test    eax, eax
0x57E784: jnz     short loc_57E793
0x57E786: test    esi, esi
0x57E788: jz      short loc_57E793
0x57E78A: mov     edx, [esi]
0x57E78C: mov     eax, [edx]
0x57E78E: push    ebx
0x57E78F: mov     ecx, esi
0x57E791: call    eax
0x57E793: mov     eax, [ebp+60h]
0x57E796: or      [eax+18h], bx
0x57E79A: mov     ecx, ebp
0x57E79C: mov     [ebp+8], bl
0x57E79F: call    sub_57D480
0x57E7A4: mov     ecx, [esp+54h+var_C]
0x57E7A8: mov     large fs:0, ecx
0x57E7AF: pop     ecx
0x57E7B0: pop     edi
0x57E7B1: pop     esi
0x57E7B2: pop     ebp
0x57E7B3: pop     ebx
0x57E7B4: add     esp, 40h
0x57E7B7: retn
0x9BEA00: mov     eax, [ebp-40h]
0x9BEA03: push    eax
0x9BEA04: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BEA09: pop     ecx
0x9BEA0A: retn
0x9BEA0B: mov     eax, [ebp-40h]
0x9BEA0E: push    eax
0x9BEA0F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BEA14: pop     ecx
0x9BEA15: retn
0x9BEA16: mov     eax, [ebp-40h]
0x9BEA19: push    eax
0x9BEA1A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BEA1F: pop     ecx
0x9BEA20: retn
0x9BEA21: mov     eax, [ebp-40h]
0x9BEA24: push    eax
0x9BEA25: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BEA2A: pop     ecx
0x9BEA2B: retn
0x9BEA2C: mov     edx, [esp+arg_4]
0x9BEA30: lea     eax, [edx-44h]
0x9BEA33: mov     ecx, [edx-48h]
0x9BEA36: xor     ecx, eax
0x9BEA38: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEA3D: mov     eax, offset stru_AE80EC
0x9BEA42: jmp     ___CxxFrameHandler3
