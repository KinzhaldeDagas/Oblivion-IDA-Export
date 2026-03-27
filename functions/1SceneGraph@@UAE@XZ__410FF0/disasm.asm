0x410FF0: push    0FFFFFFFFh
0x410FF2: push    offset ??1SceneGraph@@UAE@XZ_SEH
0x410FF7: mov     eax, large fs:0
0x410FFD: push    eax
0x410FFE: push    ecx
0x410FFF: push    ebp
0x411000: push    esi
0x411001: push    edi
0x411002: mov     eax, ___security_cookie
0x411007: xor     eax, esp
0x411009: push    eax
0x41100A: lea     eax, [esp+20h+var_C]
0x41100E: mov     large fs:0, eax
0x411014: mov     esi, ecx
0x411016: mov     [esp+20h+var_10], esi
0x41101A: mov     dword ptr [esi], offset ??_7SceneGraph@@6B@; const SceneGraph::`vftable'
0x411020: mov     eax, [esi+8]
0x411023: push    eax; ArgList
0x411024: push    offset aScenegraphSRel; "SceneGraph '%s' Released."
0x411029: mov     [esp+28h+var_4], 1
0x411031: call    sub_40FEC0
0x411036: mov     edi, [esi+0DCh]
0x41103C: mov     ebp, ds:InterlockedDecrement
0x411042: add     esp, 8
0x411045: test    edi, edi
0x411047: jz      short loc_41106B
0x411049: lea     eax, [edi+4]
0x41104C: push    eax; lpAddend
0x41104D: call    ebp ; InterlockedDecrement
0x41104F: test    eax, eax
0x411051: jnz     short loc_411061
0x411053: test    edi, edi
0x411055: jz      short loc_411061
0x411057: mov     edx, [edi]
0x411059: mov     eax, [edx]
0x41105B: push    1
0x41105D: mov     ecx, edi
0x41105F: call    eax
0x411061: mov     dword ptr [esi+0DCh], 0
0x41106B: mov     ecx, [esi+0E4h]
0x411071: test    ecx, ecx
0x411073: jz      short loc_41107D
0x411075: mov     edx, [ecx]
0x411077: mov     eax, [edx]
0x411079: push    1
0x41107B: call    eax
0x41107D: mov     edi, [esi+0E0h]
0x411083: test    edi, edi
0x411085: jz      short loc_411098
0x411087: mov     eax, [edi]
0x411089: push    eax
0x41108A: call    FormHeapFree
0x41108F: push    edi
0x411090: call    FormHeapFree
0x411095: add     esp, 8
0x411098: mov     edi, [esi+0DCh]
0x41109E: test    edi, edi
0x4110A0: mov     byte ptr [esp+20h+var_4], 0
0x4110A5: jz      short loc_4110BF
0x4110A7: lea     ecx, [edi+4]
0x4110AA: push    ecx; lpAddend
0x4110AB: call    ebp ; InterlockedDecrement
0x4110AD: test    eax, eax
0x4110AF: jnz     short loc_4110BF
0x4110B1: test    edi, edi
0x4110B3: jz      short loc_4110BF
0x4110B5: mov     edx, [edi]
0x4110B7: mov     eax, [edx]
0x4110B9: push    1
0x4110BB: mov     ecx, edi
0x4110BD: call    eax
0x4110BF: mov     ecx, esi; this
0x4110C1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4110C9: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x4110CE: mov     ecx, dword ptr [esp+20h+var_C]
0x4110D2: mov     large fs:0, ecx
0x4110D9: pop     ecx
0x4110DA: pop     edi
0x4110DB: pop     esi
0x4110DC: pop     ebp
0x4110DD: add     esp, 10h
0x4110E0: retn
