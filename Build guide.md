# Build guide
<a href="https://imgur.com/2Hsop8o"><img src="https://i.imgur.com/2Hsop8o.jpg" title="source: imgur.com" /></a>
## Materials
- 17 x [M2x8mm screws](https://www.aliexpress.com/item/1005002655776515.html)
- 3  x [M2x16mm screws](https://www.aliexpress.com/item/1005002655776515.html)
- 10 x [M2x14mm standoffs](https://www.aliexpress.com/item/1005001478301407.html?spm=a2g0s.9042311.0.0.52114c4dn6suyl)
- ~50 [1N4148 SOD-123 Diode](https://www.aliexpress.com/item/1005002383505485.html)
- 6 x [32mm (OD) x 2.4mm O-rings](https://www.aliexpress.com/item/32908087735.html?spm=a2g0o.order_list.0.0.60cf1802kyAhZY)
- [OLED](https://www.aliexpress.com/item/32896971385.html?spm=a2g0o.order_list.0.0.4c291802RJLFPs)
- [EC11 rotary encoder](https://www.aliexpress.com/item/10000056483250.html?spm=a2g0s.9042311.0.0.52114c4dn6suyl)
- [Encoder knob](https://www.aliexpress.com/item/1005002683252060.html?spm=a2g0o.order_list.0.0.5b901802I6F5Fy)
- [Silicone rubber feet](https://www.aliexpress.com/item/4000439059508.html?spm=a2g0s.9042311.0.0.52114c4dn6suyl)
- [WS2812B 5050 RGB LED](https://www.aliexpress.com/item/1005002653014067.html) (13 leds for one Verdant) 
- [Pro Micro](https://www.aliexpress.com/item/32768308647.html?spm=a2g0o.productlist.0.0.20f5f2022mgoaF)

### Also
- Soldering iron and solder
- Hex screwdriver
- Flush side cutters
- ~50 MX style switches
- 7u/6.25u and 2u PCB mount stabilizers
- Keycaps (check compatibility)

## Building

Connect Pro Micro to computer and flash "verdant02_default.hex" firmware using qmk toolbox
<a href="https://imgur.com/jdxeeJ3"><img src="https://i.imgur.com/jdxeeJ3.jpg" title="source: imgur.com" /></a>

Solder diodes for all keys. Stripe on diode to square pad on pcb
<a href="https://imgur.com/MtKJaaT"><img src="https://i.imgur.com/MtKJaaT.jpg" title="source: imgur.com" /></a>

If you want to use encoder, solder jump wires from Pro Micro to PCB

I added small amount of solder to pro micro, then placed wire there with heat.
https://golem.hu/guide/pro-micro-upgrade/
<a href="https://imgur.com/X1dGvDT"><img src="https://i.imgur.com/X1dGvDT.jpg" title="source: imgur.com" /></a>

Solder Pro Micro to top side of pcb. Check that pins match.
<a href="https://imgur.com/q7Z4lCL"><img src="https://i.imgur.com/q7Z4lCL.jpg" title="source: imgur.com" /></a>

Add rotary encoder (optional)
<a href="https://imgur.com/wUKRIoT"><img src="https://i.imgur.com/wUKRIoT.jpg" title="source: imgur.com" /></a>

Add OLED to top of Pro Micro (optional). Use something like electrical tape between back of oled and top of pro micro to avoid unwanted connection.
<a href="https://imgur.com/F4qzcHS"><img src="https://i.imgur.com/F4qzcHS.jpg" title="source: imgur.com" /></a>

You can also solder OLED here (one oled for one pcb)
<a href="https://imgur.com/1wEgQ8r"><img src="https://i.imgur.com/1wEgQ8r.jpg" title="source: imgur.com" /></a>

Solder switches and add stabilizers. Plate is optional
<a href="https://imgur.com/zlWPLtL"><img src="https://i.imgur.com/zlWPLtL.jpg" title="source: imgur.com" /></a>

Solder rgb leds (optional). !!Check that led is correct way!! (triangle goes top left). 
<a href="https://imgur.com/brBb3Zk"><img src="https://i.imgur.com/brBb3Zk.jpg" title="source: imgur.com" /></a>

Add acrylic cover to pcb using screws and standoffs.
<a href="https://imgur.com/zRdwAo9"><img src="https://i.imgur.com/zRdwAo9.jpg" title="source: imgur.com" /></a>

Add O-ring gaskets
<a href="https://imgur.com/kpHrTg5"><img src="https://i.imgur.com/kpHrTg5.jpg" title="source: imgur.com" /></a>

Here's how it should look now
<a href="https://imgur.com/WXYDwvR"><img src="https://i.imgur.com/WXYDwvR.jpg" title="source: imgur.com" /></a>
<a href="https://imgur.com/5AfWyU4"><img src="https://i.imgur.com/5AfWyU4.jpg" title="source: imgur.com" /></a>

## Case

Put screws from the bottom and add standoffs. 
<a href="https://imgur.com/yR1E0yH"><img src="https://i.imgur.com/yR1E0yH.jpg" title="source: imgur.com" /></a>

Add case layers 2-4
<a href="https://imgur.com/j69BH8Q"><img src="https://i.imgur.com/j69BH8Q.jpg" title="source: imgur.com" /></a>

Add soldered pcb.
<a href="https://imgur.com/LDjGZde"><img src="https://i.imgur.com/LDjGZde.jpg" title="source: imgur.com" /></a>

Add rest of the case layers 5-7 and screw it in.
<a href="https://imgur.com/hOjfyCq"><img src="https://i.imgur.com/hOjfyCq.jpg" title="source: imgur.com" /></a>

