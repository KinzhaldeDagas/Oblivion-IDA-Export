0x78D6A0: push    ebp; CSpeedTreeRT default constructor/init. Allocates owned engine/geometry/lighting/wind/simple-billboard/frond objects, tree sizes, shared refcount/list, registers in global tree list, and initializes base extents/horizontal coords.
0x78D6A1: mov     ebp, esp
0x78D6A3: push    0FFFFFFFFh
0x78D6A5: push    offset SEH_78D6A0
0x78D6AA: mov     eax, large fs:0
0x78D6B0: push    eax
0x78D6B1: sub     esp, 4Ch
0x78D6B4: push    ebx
0x78D6B5: push    esi
0x78D6B6: push    edi
0x78D6B7: mov     eax, ds:0B30AACh
0x78D6BC: xor     eax, ebp
0x78D6BE: push    eax
0x78D6BF: lea     eax, [ebp+var_C]
0x78D6C2: mov     large fs:0, eax
0x78D6C8: mov     [ebp+var_10], esp
0x78D6CB: mov     esi, ecx
0x78D6CD: mov     [ebp+var_14], esi
0x78D6D0: fld     dword ptr ds:0A8C430h
0x78D6D6: xor     ebx, ebx
0x78D6D8: fstp    dword ptr [esi+1Ch]
0x78D6DB: or      eax, 0FFFFFFFFh
0x78D6DE: fld     dword ptr ds:0A41724h
0x78D6E4: mov     edi, 1
0x78D6E9: fstp    dword ptr [esi+20h]
0x78D6EC: push    44h ; 'D'; Size
0x78D6EE: fld     dword ptr ds:0A3D65Ch
0x78D6F4: mov     [esi], ebx
0x78D6F6: fstp    dword ptr [esi+24h]
0x78D6F9: mov     [esi+4], ebx
0x78D6FC: fldz
0x78D6FE: mov     [esi+8], ebx
0x78D701: fstp    dword ptr [esi+28h]
0x78D704: mov     [esi+0Ch], ebx
0x78D707: mov     [esi+10h], ebx
0x78D70A: mov     [esi+14h], ebx
0x78D70D: mov     [esi+18h], edi
0x78D710: mov     [esi+2Ch], ebx
0x78D713: mov     [esi+30h], ebx
0x78D716: mov     [esi+34h], ebx
0x78D719: mov     [esi+3Ch], eax
0x78D71C: mov     [esi+40h], ebx
0x78D71F: mov     byte ptr [esi+44h], 54h ; 'T'
0x78D723: mov     [esi+45h], bl
0x78D726: mov     [esi+48h], eax
0x78D729: mov     [esi+4Ch], ebx
0x78D72C: mov     [esi+50h], ebx
0x78D72F: mov     [esi+54h], bx; 2026-05-21 360 gap pass: CSpeedTreeRT constructor zeros +0x54 directional image count; current parser paths do not later populate it.
0x78D733: mov     [esi+58h], ebx
0x78D736: mov     [esi+5Ch], ebx
0x78D739: mov     [esi+64h], bx
0x78D73D: mov     [esi+68h], ebx
0x78D740: mov     [esi+6Ch], bl
0x78D743: mov     [esi+6Dh], bl
0x78D746: mov     [ebp+var_4], ebx
0x78D749: call    FormHeapAlloc
0x78D74E: mov     ecx, eax; this
0x78D750: add     esp, 4
0x78D753: mov     [ebp+value], ecx
0x78D756: cmp     ecx, ebx
0x78D758: mov     byte ptr [ebp+var_4], 1
0x78D75C: jz      short loc_78D765
0x78D75E: call    OB_CWindEngine_ctor_010201A0; Initializes the exact Oblivion CWindEngine per-instance defaults: strength 0.25, method fields 2, rocking enabled, matrix span 4, leaf factors/scalars 1, and angle pointers/count zero. Unlike RT4.1's constructor, this Oblivion body contains no wind-matrix resize or reference-count side effects.
0x78D763: jmp     short loc_78D767
0x78D765: xor     eax, eax
0x78D767: push    118h; Size
0x78D76C: mov     byte ptr [ebp+var_4], bl
0x78D76F: mov     [esi+10h], eax
0x78D772: call    FormHeapAlloc
0x78D777: mov     ecx, eax; this
0x78D779: add     esp, 4
0x78D77C: mov     [ebp+value], ecx
0x78D77F: cmp     ecx, ebx
0x78D781: mov     byte ptr [ebp+var_4], 2
0x78D785: jz      short loc_78D793
0x78D787: mov     eax, [esi+10h]
0x78D78A: push    ebx; retainTexcoords
0x78D78B: push    eax; windEngine
0x78D78C: call    OB_CIndexedGeometry_ctor_010201A0; CIndexedGeometry constructor: stock 0x118-byte geometry writer; records retain-texcoord flag, CWindEngine pointer, vertex-weighting state, 16-bit vertex/LOD/strip counters, index strip vectors, and attribute vectors.
0x78D791: jmp     short loc_78D795
0x78D793: xor     eax, eax
0x78D795: push    110h; Size
0x78D79A: mov     byte ptr [ebp+var_4], bl
0x78D79D: mov     [esi+4], eax
0x78D7A0: call    FormHeapAlloc
0x78D7A5: mov     ecx, eax; Allocates stock Oblivion CTreeEngine as 0x110 bytes. This hard bounds the embedded layout at SIdvWindInfo strength (+0x10C); later 4.1 floor/root/mesh/global fields are not present in this object.
0x78D7A7: add     esp, 4
0x78D7AA: mov     [ebp+value], ecx
0x78D7AD: cmp     ecx, ebx
0x78D7AF: mov     byte ptr [ebp+var_4], 3
0x78D7B3: jz      short loc_78D7C0
0x78D7B5: mov     edx, [esi+4]
0x78D7B8: push    edx; branchGeometry
0x78D7B9: call    OB_CTreeEngine_ctor_010201A0; Constructs CTreeEngine with branch geometry pointer. See 0x7A3700 for stock 0x110-byte field map.
0x78D7BE: jmp     short loc_78D7C2
0x78D7C0: xor     eax, eax
0x78D7C2: push    0B0h ; '°'; Size
0x78D7C7: mov     byte ptr [ebp+var_4], bl
0x78D7CA: mov     [esi], eax
0x78D7CC: call    FormHeapAlloc
0x78D7D1: mov     ecx, eax; this
0x78D7D3: add     esp, 4
0x78D7D6: mov     [ebp+value], ecx
0x78D7D9: cmp     ecx, ebx
0x78D7DB: mov     byte ptr [ebp+var_4], 4
0x78D7DF: jz      short loc_78D7E8
0x78D7E1: call    OB_CLightingEngine_ctor_010201A0; Oblivion-local CLightingEngine constructor. Establishes the 0xB0 layout: branch/leaf/frond lighting methods, three 13-float OpenGL-style materials, leaf adjustment scalar, and static-lighting style.
0x78D7E6: jmp     short loc_78D7EA
0x78D7E8: xor     eax, eax
0x78D7EA: push    30h ; '0'; Size
0x78D7EC: mov     byte ptr [ebp+var_4], bl
0x78D7EF: mov     [esi+0Ch], eax
0x78D7F2: call    FormHeapAlloc
0x78D7F7: mov     ecx, eax; this
0x78D7F9: add     esp, 4
0x78D7FC: mov     [ebp+value], ecx
0x78D7FF: cmp     ecx, ebx
0x78D801: mov     byte ptr [ebp+var_4], 5
0x78D805: jz      short loc_78D812
0x78D807: mov     eax, [esi+10h]
0x78D80A: push    eax; windEngine
0x78D80B: call    OB_CLeafGeometry_ctor_010201A0; SpeedTree decode: CLeafGeometry ctor. Initializes compact 0x30-byte stock leaf-geometry container: manual-lighting=false, vertex-weighting=false, CWindEngine*, default 3 rocking groups, leaf vertex/texcoord/program-table/dim/origin pointers null, texture and LOD counts zero.
0x78D810: jmp     short loc_78D814
0x78D812: xor     eax, eax
0x78D814: push    34h ; '4'; Size
0x78D816: mov     byte ptr [ebp+var_4], bl
0x78D819: mov     [esi+8], eax
0x78D81C: call    FormHeapAlloc
0x78D821: mov     ecx, eax; this
0x78D823: add     esp, 4
0x78D826: mov     [ebp+value], ecx
0x78D829: cmp     ecx, ebx
0x78D82B: mov     byte ptr [ebp+var_4], 6
0x78D82F: jz      short loc_78D838
0x78D831: call    OB_CSimpleBillboard_ctor_010201A0; Initializes a legacy 0x34-byte CSimpleBillboard cache by clearing only its valid byte.
0x78D836: jmp     short loc_78D83A
0x78D838: xor     eax, eax
0x78D83A: push    1Ch; Size
0x78D83C: mov     byte ptr [ebp+var_4], bl
0x78D83F: mov     [esi+14h], eax
0x78D842: call    FormHeapAlloc
0x78D847: add     esp, 4
0x78D84A: push    4; Size
0x78D84C: mov     [esi+40h], eax
0x78D84F: call    FormHeapAlloc; Allocates the 4-byte shared-instance refcount object used as family identity; initializes it to 1 at 0x78D85C. This allocation outlives individual base/instance wrappers until final shared cleanup.
0x78D854: add     esp, 4
0x78D857: mov     [esi+30h], eax
0x78D85A: push    10h; Size
0x78D85C: mov     [eax], edi
0x78D85E: call    FormHeapAlloc
0x78D863: add     esp, 4
0x78D866: cmp     eax, ebx
0x78D868: jz      short loc_78D875
0x78D86A: mov     [eax+4], ebx
0x78D86D: mov     [eax+8], ebx
0x78D870: mov     [eax+0Ch], ebx
0x78D873: jmp     short loc_78D877
0x78D875: xor     eax, eax
0x78D877: push    6Ch ; 'l'; Size
0x78D879: mov     byte ptr [ebp+var_4], bl
0x78D87C: mov     [esi+38h], eax
0x78D87F: call    FormHeapAlloc
0x78D884: mov     ecx, eax; this
0x78D886: add     esp, 4
0x78D889: mov     [ebp+value], ecx
0x78D88C: cmp     ecx, ebx
0x78D88E: mov     byte ptr [ebp+var_4], 8
0x78D892: jz      short loc_78D89B
0x78D894: call    OB_CFrondEngine_ctor_010201A0; SpeedTree decode: compact stock CFrondEngine ctor. Object is 0x6C bytes in CSpeedTreeRT construction; initializes geometry/lighting pointers, MSVC vector containers for guides/guide-LODs/textures, stock frond fields through min cross segments, and default Bezier profile. Later 4.1 supplemental frond fields are not present in this stock allocation.
0x78D899: jmp     short loc_78D89D
0x78D89B: xor     eax, eax
0x78D89D: push    118h; Size
0x78D8A2: mov     byte ptr [ebp+var_4], bl
0x78D8A5: mov     [esi+5Ch], eax
0x78D8A8: call    FormHeapAlloc
0x78D8AD: mov     ecx, eax; this
0x78D8AF: add     esp, 4
0x78D8B2: mov     [ebp+value], ecx
0x78D8B5: cmp     ecx, ebx
0x78D8B7: mov     byte ptr [ebp+var_4], 9
0x78D8BB: jz      short loc_78D8C9
0x78D8BD: mov     edx, [esi+10h]
0x78D8C0: push    edi; retainTexcoords
0x78D8C1: push    edx; windEngine
0x78D8C2: call    OB_CIndexedGeometry_ctor_010201A0; CIndexedGeometry constructor: stock 0x118-byte geometry writer; records retain-texcoord flag, CWindEngine pointer, vertex-weighting state, 16-bit vertex/LOD/strip counters, index strip vectors, and attribute vectors.
0x78D8C7: jmp     short loc_78D8CB
0x78D8C9: xor     eax, eax
0x78D8CB: mov     [esi+60h], eax
0x78D8CE: lea     eax, [ebp+value]
0x78D8D1: push    eax; value
0x78D8D2: mov     ecx, offset stru_B42984; this
0x78D8D7: mov     byte ptr [ebp+var_4], bl
0x78D8DA: mov     [ebp+value], esi
0x78D8DD: call    OB_stVector4_PushBack_010201A0; CSpeedTreeRT constructor registers the instance in global list dword_B42984; SetCamera/cache invalidation walks this list.
0x78D8E2: fldz
0x78D8E4: add     ds:0B42980h, edi
0x78D8EA: mov     ecx, [esi+0Ch]
0x78D8ED: mov     ds:0B429BCh, ecx
0x78D8F3: mov     edx, [esi+40h]
0x78D8F6: fst     dword ptr [edx]
0x78D8F8: mov     eax, [esi+40h]
0x78D8FB: fst     dword ptr [eax+4]
0x78D8FE: mov     ecx, [esi+40h]
0x78D901: fst     dword ptr [ecx+8]
0x78D904: mov     edx, [esi+40h]
0x78D907: fld1
0x78D909: fst     dword ptr [edx+0Ch]
0x78D90C: mov     eax, [esi+40h]
0x78D90F: fst     dword ptr [eax+10h]
0x78D912: mov     ecx, [esi+40h]
0x78D915: fst     dword ptr [ecx+14h]
0x78D918: mov     edx, [esi+40h]
0x78D91B: fstp    dword ptr [edx+18h]
0x78D91E: cmp     ebx, 0Ch
0x78D921: jge     short loc_78D92B
0x78D923: fst     dword ptr [esi+ebx*4+70h]
0x78D927: add     ebx, edi
0x78D929: jmp     short loc_78D91E
0x78D92B: fstp    st
0x78D92D: mov     eax, esi
0x78D92F: mov     ecx, [ebp+var_C]
0x78D932: mov     large fs:0, ecx
0x78D939: pop     ecx
0x78D93A: pop     edi
0x78D93B: pop     esi
0x78D93C: pop     ebx
0x78D93D: mov     esp, ebp
0x78D93F: pop     ebp
0x78D940: retn
0x78D941: mov     ecx, [ebp+var_1C]
0x78D944: mov     eax, [ecx]
0x78D946: mov     edx, [eax+4]
0x78D949: call    edx
0x78D94B: push    eax
0x78D94C: push    offset aCspeedtreertCs; "CSpeedTreeRT::CSpeedTreeRT( )"
0x78D951: push    offset aSFailedS; "%s - failed [%s]"
0x78D956: lea     esi, [ebp+result]; result
0x78D959: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D95E: add     esp, 0Ch
0x78D961: cmp     dword ptr [eax+18h], 10h
0x78D965: mov     byte ptr [ebp+var_4], 0Bh
0x78D969: jb      short loc_78D970
0x78D96B: mov     eax, [eax+4]
0x78D96E: jmp     short loc_78D973
0x78D970: add     eax, 4
0x78D973: push    eax; error
0x78D974: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D979: add     esp, 4
0x78D97C: lea     ecx, [ebp+result]; this
0x78D97F: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D984: mov     eax, offset loc_78D9C8
0x78D989: retn
0x78D98A: push    offset aCspeedtreertCs; "CSpeedTreeRT::CSpeedTreeRT( )"
0x78D98F: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D994: lea     esi, [ebp+var_54]; result
0x78D997: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D99C: add     esp, 8
0x78D99F: cmp     dword ptr [eax+18h], 10h
0x78D9A3: mov     byte ptr [ebp+var_4], 0Ch
0x78D9A7: jb      short loc_78D9AE
0x78D9A9: mov     eax, [eax+4]
0x78D9AC: jmp     short loc_78D9B1
0x78D9AE: add     eax, 4
0x78D9B1: push    eax; error
0x78D9B2: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D9B7: add     esp, 4
0x78D9BA: lea     ecx, [ebp+var_54]; this
0x78D9BD: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D9C2: mov     eax, offset loc_78D9C8
0x78D9C7: retn
0x78D9C8: mov     esi, [ebp+var_14]
0x78D9CB: mov     eax, esi
0x78D9CD: mov     ecx, [ebp+var_C]
0x78D9D0: mov     large fs:0, ecx
0x78D9D7: pop     ecx
0x78D9D8: pop     edi
0x78D9D9: pop     esi
0x78D9DA: pop     ebx
0x78D9DB: mov     esp, ebp
0x78D9DD: pop     ebp
0x78D9DE: retn
0x9CB970: mov     eax, [ebp+value]
0x9CB973: push    eax
0x9CB974: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB979: pop     ecx
0x9CB97A: retn
0x9CB97B: mov     eax, [ebp+value]
0x9CB97E: push    eax
0x9CB97F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB984: pop     ecx
0x9CB985: retn
0x9CB986: mov     eax, [ebp+value]
0x9CB989: push    eax
0x9CB98A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB98F: pop     ecx
0x9CB990: retn
0x9CB991: mov     eax, [ebp+value]
0x9CB994: push    eax
0x9CB995: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB99A: pop     ecx
0x9CB99B: retn
0x9CB99C: mov     eax, [ebp+value]
0x9CB99F: push    eax
0x9CB9A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB9A5: pop     ecx
0x9CB9A6: retn
0x9CB9A7: mov     eax, [ebp+value]
0x9CB9AA: push    eax
0x9CB9AB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB9B0: pop     ecx
0x9CB9B1: retn
0x9CB9B2: mov     eax, [ebp+var_58]
0x9CB9B5: push    eax
0x9CB9B6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB9BB: pop     ecx
0x9CB9BC: retn
0x9CB9BD: mov     eax, [ebp+value]
0x9CB9C0: push    eax
0x9CB9C1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB9C6: pop     ecx
0x9CB9C7: retn
0x9CB9C8: mov     eax, [ebp+value]
0x9CB9CB: push    eax
0x9CB9CC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB9D1: pop     ecx
0x9CB9D2: retn
0x9CB9D3: lea     ecx, [ebp+result]; this
0x9CB9D6: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB9DB: lea     ecx, [ebp+var_54]; this
0x9CB9DE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB9E3: mov     edx, [esp-4+arg_4]
0x9CB9E7: lea     eax, [edx+0Ch]
0x9CB9EA: mov     ecx, [edx-5Ch]
0x9CB9ED: xor     ecx, eax
0x9CB9EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB9F4: mov     eax, offset stru_AF4708
0x9CB9F9: jmp     ___CxxFrameHandler3
