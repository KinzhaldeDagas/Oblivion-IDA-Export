0x890240: push    0FFFFFFFFh
0x890242: push    offset ??1bhkConstraint@@UAE@XZ_SEH
0x890247: mov     eax, large fs:0
0x89024D: push    eax
0x89024E: push    ecx
0x89024F: push    esi
0x890250: mov     eax, ds:0B30AACh
0x890255: xor     eax, esp
0x890257: push    eax
0x890258: lea     eax, [esp+18h+var_C]
0x89025C: mov     large fs:0, eax
0x890262: mov     esi, ecx
0x890264: mov     [esp+18h+var_10], esi
0x890268: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x89026D: xor     eax, eax
0x89026F: mov     [esi+0Ch], eax
0x890272: push    eax
0x890273: lea     ecx, [esi+10h]; this
0x890276: mov     [esp+1Ch+var_4], eax
0x89027A: mov     dword ptr [esi], offset ??_7bhkCharacterProxy@@6B@; const bhkCharacterProxy::`vftable'
0x890280: call    ??0bhkCharacterPointCollector@@QAE@XZ; TES4 authoritative: bhkCharacterPointCollector constructor. Base all-contact collector starts with inline 0x30-byte hit storage at this+0x20, initial capacity 8; this+0x1A0 links back to proxy+0x10 collector state.
0x890285: add     dword ptr ds:0BA8020h, 1
0x89028C: mov     eax, esi
0x89028E: mov     ecx, [esp+18h+var_C]
0x890292: mov     large fs:0, ecx
0x890299: pop     ecx
0x89029A: pop     esi
0x89029B: add     esp, 10h
0x89029E: retn
0x9D68E0: mov     ecx, [ebp-10h]; this
0x9D68E3: jmp     ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x9D68E8: mov     edx, [esp+arg_4]
0x9D68EC: lea     eax, [edx-8]
0x9D68EF: mov     ecx, [edx-0Ch]
0x9D68F2: xor     ecx, eax
0x9D68F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D68F9: mov     eax, offset stru_AFE69C
0x9D68FE: jmp     ___CxxFrameHandler3
