0x402860: push    esi
0x402861: push    35h ; '5'; a1
0x402863: mov     esi, ecx
0x402865: call    TESForm_LookupByFormID
0x40286A: push    36h ; '6'; a1
0x40286C: mov     [esi], eax
0x40286E: call    TESForm_LookupByFormID
0x402873: push    37h ; '7'; a1
0x402875: mov     [esi+4], eax
0x402878: call    TESForm_LookupByFormID
0x40287D: push    38h ; '8'; a1
0x40287F: mov     [esi+8], eax
0x402882: call    TESForm_LookupByFormID
0x402887: push    39h ; '9'; a1
0x402889: mov     [esi+0Ch], eax
0x40288C: call    TESForm_LookupByFormID
0x402891: push    3Ah ; ':'; a1
0x402893: mov     [esi+10h], eax
0x402896: call    TESForm_LookupByFormID
0x40289B: add     esp, 18h
0x40289E: mov     [esi+14h], eax
0x4028A1: pop     esi
0x4028A2: retn
