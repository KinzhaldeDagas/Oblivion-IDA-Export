0x8BD250: push    0FFFFFFFFh
0x8BD252: push    offset ??1bhkCachingShapePhantom@@UAE@XZ_SEH
0x8BD257: mov     eax, large fs:0
0x8BD25D: push    eax
0x8BD25E: push    ecx
0x8BD25F: push    esi
0x8BD260: mov     eax, ds:0B30AACh
0x8BD265: xor     eax, esp
0x8BD267: push    eax
0x8BD268: lea     eax, [esp+18h+var_C]
0x8BD26C: mov     large fs:0, eax
0x8BD272: mov     esi, ecx
0x8BD274: mov     [esp+18h+var_10], esi
0x8BD278: mov     dword ptr [esi], offset ??_7bhkCachingShapePhantom@@6B@; const bhkCachingShapePhantom::`vftable'
0x8BD27E: mov     [esp+18h+var_4], 0
0x8BD286: call    sub_89D700
0x8BD28B: sub     dword ptr ds:0BA804Ch, 1
0x8BD292: mov     ecx, esi; this
0x8BD294: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8BD29C: call    ??1bhkShapePhantom@@UAE@XZ; bhkShapePhantom::~bhkShapePhantom(void)
0x8BD2A1: mov     ecx, [esp+18h+var_C]
0x8BD2A5: mov     large fs:0, ecx
0x8BD2AC: pop     ecx
0x8BD2AD: pop     esi
0x8BD2AE: add     esp, 10h
0x8BD2B1: retn
