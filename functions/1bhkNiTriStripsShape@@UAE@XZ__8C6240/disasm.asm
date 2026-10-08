0x8C6240: push    0FFFFFFFFh
0x8C6242: push    offset ??1bhkPackedNiTriStripsShape@@UAE@XZ_SEH
0x8C6247: mov     eax, large fs:0
0x8C624D: push    eax
0x8C624E: push    ecx
0x8C624F: push    esi
0x8C6250: mov     eax, ds:0B30AACh
0x8C6255: xor     eax, esp
0x8C6257: push    eax
0x8C6258: lea     eax, [esp+18h+var_C]
0x8C625C: mov     large fs:0, eax
0x8C6262: mov     esi, ecx
0x8C6264: mov     [esp+18h+var_10], esi
0x8C6268: mov     dword ptr [esi], offset ??_7bhkNiTriStripsShape@@6B@; const bhkNiTriStripsShape::`vftable'
0x8C626E: mov     [esp+18h+var_4], 0
0x8C6276: call    sub_89D700
0x8C627B: sub     dword ptr ds:0BA812Ch, 1
0x8C6282: mov     ecx, esi; this
0x8C6284: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C628C: call    ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x8C6291: mov     ecx, [esp+18h+var_C]
0x8C6295: mov     large fs:0, ecx
0x8C629C: pop     ecx
0x8C629D: pop     esi
0x8C629E: add     esp, 10h
0x8C62A1: retn
0x9D61E0: mov     ecx, [ebp-10h]; this
0x9D61E3: jmp     ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x9D61E8: mov     edx, [esp+arg_4]
0x9D61EC: lea     eax, [edx-8]
0x9D61EF: mov     ecx, [edx-0Ch]
0x9D61F2: xor     ecx, eax
0x9D61F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D61F9: mov     eax, offset stru_AFE13C
0x9D61FE: jmp     ___CxxFrameHandler3
