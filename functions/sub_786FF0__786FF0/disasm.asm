0x786FF0: push    0FFFFFFFFh
0x786FF2: push    offset SEH_786FF0
0x786FF7: mov     eax, large fs:0
0x786FFD: push    eax
0x786FFE: push    ecx
0x786FFF: push    esi
0x787000: mov     eax, ds:0B30AACh
0x787005: xor     eax, esp
0x787007: push    eax
0x787008: lea     eax, [esp+18h+var_C]
0x78700C: mov     large fs:0, eax
0x787012: mov     esi, ecx
0x787014: mov     [esp+18h+var_10], esi
0x787018: lea     ecx, [esi+18h]; void *
0x78701B: mov     [esp+18h+var_4], 0
0x787023: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x787028: mov     ecx, esi; void *
0x78702A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x787032: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x787037: mov     ecx, [esp+18h+var_C]
0x78703B: mov     large fs:0, ecx
0x787042: pop     ecx
0x787043: pop     esi
0x787044: add     esp, 10h
0x787047: retn
