0x890410: push    0FFFFFFFFh
0x890412: push    offset ??1bhkPackedNiTriStripsShape@@UAE@XZ_SEH
0x890417: mov     eax, large fs:0
0x89041D: push    eax
0x89041E: push    ecx
0x89041F: push    esi
0x890420: mov     eax, ds:0B30AACh
0x890425: xor     eax, esp
0x890427: push    eax
0x890428: lea     eax, [esp+18h+var_C]
0x89042C: mov     large fs:0, eax
0x890432: mov     esi, ecx
0x890434: mov     [esp+18h+var_10], esi
0x890438: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x89043D: xor     eax, eax
0x89043F: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x890445: mov     [esi+0Ch], eax
0x890448: mov     [esi+10h], eax
0x89044B: add     dword ptr ds:0BA7D70h, 1
0x890452: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x890458: add     dword ptr ds:0BA816Ch, 1
0x89045F: mov     [esp+18h+var_4], eax
0x890463: mov     eax, [esp+18h+info]
0x890467: push    eax; info
0x890468: mov     ecx, esi; self
0x89046A: mov     dword ptr [esi], offset ??_7bhkListShape@@6B@; const bhkListShape::`vftable'
0x890470: call    OB_bhkListShape_BuildFromCinfo_010201A0
0x890475: add     dword ptr ds:0BA7D58h, 1
0x89047C: mov     eax, esi
0x89047E: mov     ecx, [esp+18h+var_C]
0x890482: mov     large fs:0, ecx
0x890489: pop     ecx
0x89048A: pop     esi
0x89048B: add     esp, 10h
0x89048E: retn    4
0x9D61E0: mov     ecx, [ebp-10h]; this
0x9D61E3: jmp     ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x9D61E8: mov     edx, [esp+arg_4]
0x9D61EC: lea     eax, [edx-8]
0x9D61EF: mov     ecx, [edx-0Ch]
0x9D61F2: xor     ecx, eax
0x9D61F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D61F9: mov     eax, offset stru_AFE13C
0x9D61FE: jmp     ___CxxFrameHandler3
