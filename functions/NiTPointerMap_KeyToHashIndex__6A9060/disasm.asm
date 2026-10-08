0x6A9060: mov     eax, [esp+arg_0]; MEF PERF 2026-09-08: Qualified map hash fact: unsigned key modulo map+4 bucketCount, returned inEAX withRET4. The examined SetAt452570..4525FC has no growth/rehash call, but this does not prove no external resize exists. A capacity change can reorder deferred map traversal, so profile and seal lifetime/order before proposing it.
0x6A9064: xor     edx, edx
0x6A9066: div     dword ptr [ecx+4]
0x6A9069: mov     eax, edx
0x6A906B: retn    4
