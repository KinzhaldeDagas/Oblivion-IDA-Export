0x787740: mov     ecx, [esp+arg_0]
0x787744: sub     esp, 0Ch
0x787747: test    ecx, ecx
0x787749: ja      short loc_787767
0x78774B: xor     ecx, ecx
0x78774D: lea     edx, ds:0[ecx*8]
0x787754: sub     edx, ecx
0x787756: add     edx, edx
0x787758: add     edx, edx
0x78775A: push    edx; Size
0x78775B: call    FormHeapAlloc
0x787760: add     esp, 4
0x787763: add     esp, 0Ch
0x787766: retn
0x787767: or      eax, 0FFFFFFFFh
0x78776A: xor     edx, edx
0x78776C: div     ecx
0x78776E: cmp     eax, 1Ch
0x787771: jnb     short loc_78774D
0x787773: lea     eax, [esp+0Ch+arg_0]
0x787777: push    eax; char **
0x787778: lea     ecx, [esp+10h+var_C]; this
0x78777C: mov     [esp+10h+arg_0], 0
0x787784: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x787789: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x78778E: lea     ecx, [esp+10h+var_C]
0x787792: push    ecx
0x787793: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x78779B: call    ThrowException??
