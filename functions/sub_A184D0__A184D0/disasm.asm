0xA184D0: mov     eax, TESDescription_CachedDesc.m_data
0xA184D5: push    eax
0xA184D6: call    FormHeapFree
0xA184DB: xor     eax, eax
0xA184DD: add     esp, 4
0xA184E0: mov     TESDescription_CachedDesc.m_data, eax
0xA184E5: mov     TESDescription_CachedDesc.m_bufLen, ax
0xA184EB: mov     TESDescription_CachedDesc.m_dataLen, ax
0xA184F1: retn
