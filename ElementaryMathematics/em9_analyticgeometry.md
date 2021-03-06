em9_analyticgeometry.md

Elementary Methematics: 9 Analytic Geometry
================================================================================

A~0f14

Analytic Geometry in a Plane
================================================================================

9.11 Transformations of Coordinates
--------------------------------------------------------------------------------

- translation of axes
  - axes move parallelly, O(0, 0) -> O'(a, b)
  - P(x, y) -> P(x', y'):
    - $$ x' = x - a $$
    - $$ y' = y - b $$
- turning around origin of coordinates
  - turn coor system XOY by ϕ
  - P(x, y) -> P(x', y'):
    - $$ x' = x ⋅ \cos ϕ + y ⋅ \sin ϕ $$
    - $$ y' = -x ⋅ \sin ϕ + y ⋅ \cos ϕ $$
- central symmetry (ϕ = π):
    - $$ x' = -x, y' = -y $$
- homothetic transformation（位似变换） with a center O(a, b) and a coefficient k != 0:
  - $$ x' - a = k (x-a) $$
  - $$ y' - b = k (y-b) $$
- affine transformation（仿射变换）:
  - $$ x' = ax + by + c $$
  - $$ y' = dx + ey + f $$
  - where $\begin{vmatrix} a & b \\ d & e \end{vmatrix} \neq 0$
- an affine transformation transfers  
  straight lines to straight lines,  
  intersecting lines to intersecting lines,  
  parallel straight lines to parallel straight lines;  
  all above mentioned transformations of coordinates are affine transformations

9.12 Straight Line
--------------------------------------------------------------------------------

- general equation of straight line:
  - $$ Ax + By + C = 0 $$
  - where A, B are aoordinates of normal vector of the straight line
- at B != 0, receive an equation of straight line with slope:
  - $$ y = -A/B x - C/B = mx + k $$
  - line through (x_0, y_0) and not parallel to OY:
  - $$ y - y_0 = m(x - x_0) $$
  - where m is a slope
- at A, B, C !=0, receive an equation of straight line in segments on axes:
  - $$ x/a + y/b = 1 $$
  - where a=-C/A, b=-C/B
  - this line through (a, 0) and (0, b)
- equation of straight line going through two different points:
  - $$ \frac{y-y_1}{y_2-y_1} = \frac{x-x_1}{x_2-x_1} $$
  - at x_1 != x_2, y_1 != y_2
- parametric（参数） equation of straight line:
  - going through (x_0, y_0) and parallel to vector (a, b)
  - $$ x = x_0 + at $$
  - $$ y = y_0 + bt $$
- parallelism condition of straight lines:
  1. for Ax+By+c=0 and Dx+Ey+F=0: $AE-BD=0$
  2. for y=mx+k and y=px+q: $m=p$
- perpendicularity condition of straight lines:
  1. for Ax+By+c=0 and Dx+Ey+F=0: $AD+BE=0$
  2. for y=mx+k and y=px+q: $mp=-1$
- distance between two points:
  - $$ d = √(x_1 - x_2)^2 + (y_1 - y_2)^2 $$
- distance from point to straight line:
  - $$ d = |Ax_0 + By_0 + C| / √(A^2+B^2) $$
- distance between parallel straight lines Ax+By+C=0 and Ax+By+F=0:
  - $$ l = |C-F| / √(A^2+B^2) $$
- angle between straight lines
  1. y=mx+k and y=px+q:
     - $$ \tan α = |\frac{m-p}{1+mp}| $$
  1. Ax+By+c=0 and Dx+Ey+F=0:
     - $$ \cos α = \frac{|AD+BE|}{√(A^2+B^2) √(D^2+E^2)} $$

9.13 Circle
--------------------------------------------------------------------------------

- circle
  - a locus of points
  - equidistant from center of circle, at distance R, radius of circle
- equation of circle
  - $$ (x-x_0)^2 + (y-y_0)^2 = R^2 $$
- equation of tangent line to circle at (x_1, y_1):
  - $$ (x_1-x_0)(x-x_0)+(y_1-y_0)(y-y_0) = R^2 $$
- tangency condition of straight line y=mx+k and circle x^2+y^2=R^2:
  - $$ k^2 / (1+m^2) = R^2 $$

9.14 Ellipse
--------------------------------------------------------------------------------

- ellipse
  - a locus of points, a sum of distances from which to 2 given points F_1 and F_2, called focuses of ellipse, is a constant value
- equation of ellipse
  - $$ \frac{x^2}{a^2} + \frac{y^2}{b^2} = 1 $$
- focal length: $F_1 F_2 = 2c, c=√|a^2-b^2|$
- large and small axes of ellipse (2a and 2b)
- eccentricity（离心率）: e = c/a, e<1
- equation of tangent line to ellipse:
  - $$ \frac{x_1 x}{a^2} + \frac{y_1 y}{b^2} = 1 $$
- tangency condition of straight line y=mx+k and ellipse x^2/a^2+y^2/b^2=1:
  - $$ k^2 = m^2 a^2 + b^2 $$

9.15 Hyperbola
--------------------------------------------------------------------------------

- hyperbola（双曲线）
  - a locus of points, a modulus of difference of distances from which to the two given points F1 and F2, called focuses of hyperbola, is a constant value
- equation of hyperbola
  - $$ \frac{x^2}{a^2} - \frac{y^2}{b^2} = 1 $$
- focal length: $F_1 F_2 = 2c, c=√(a^2+b^2)$
- real and imaginary axes of hyperbola (2a and 2b)
- eccentricity: e = c/a, e>1
- asymptotes（渐近线） of hyperbola
  - $$ y = ± (b/a) x $$
- equation of tangent line to hyperbola:
  - $$ \frac{x_1 x}{a^2} - \frac{y_1 y}{b^2} = 1 $$
- tangency condition of straight line y=mx+k and hyperbola x^2/a^2-y^2/b^2=1:
  - $$ k^2 = m^2 a^2 - b^2 $$

9.16 Parabola
--------------------------------------------------------------------------------

- parabola（抛物线）
  - a locus of points, equidistant from the given point F (focus（焦点） of parabola, $(p/2, 0)$) and the given straight line (directrix（准线） of parabola, $x = -p/2$)
- equation of parabola:
  - $$ y^2 = 2px $$
- equation of tangent line to parabola:
  - $$ y_1 y = p(x + x_1) $$
- tangency condition of straight line y=mx+k and parabola y^2=2px
  - $$ 2mk = p $$

Analytic Geometry in a Space
================================================================================

9.21 Transformations of Coordinates
--------------------------------------------------------------------------------

- translation of axes
  - move origin O to O'(a, b, c), a point P in new and old coordinate systems are
  - $$ x' = x-a $$
  - $$ y' = y-b $$
  - $$ z' = z-c $$
- homothetic transformation with a center O(a, b, c) and a coefficient k != 0:
  - $$ x' - a = k (x-a) $$
  - $$ y' - b = k (y-b) $$
  - $$ z' - c = k (z-c) $$
- affine transformation
  - $$ x' = ax + by + cz + d $$
  - $$ y' = ex + fy + gz + h $$
  - $$ z' = px + qy + rz + s $$
  - where $\begin{vmatrix} a & b & c \\ e & f & g \\ p & q & r \end{vmatrix} \neq 0$
  - an affine transformation transfers straight lines to straight lines, intersecting lines to intersecting lines, crossing straight lines to crossing straight lines, parallel straight lines to parallel straight lines; all above mentioned transformations of coordinates are affine transformations

9.22 Plane
--------------------------------------------------------------------------------

- general equation of plane
  - $$ Ax + By + Cz + D = 0 $$
  - A, B, and C are coordinates of normal vector
- equation of plane in segments on axes (A, B, C != 0):
  - $$ x/a + y/b + z/c = 1 $$
  - where $a=-D/A, b=-D/B, c=-D/C$
  - this plane goes through $(a, 0, 0), (0, b, 0), (0, 0, c)$
- equation of plane going through the given point and perpendicular to the given vector:
  - $$ A(x–x_0) + B(y-y_0) + C(z-z_0) = 0 $$
- parametric equation of plane
  - passing through a point (х0, у0, z0) and two noncollinear vectors (a1, b1, c1) and (a2, b2, c2), set in a rectangular cartesian system of soordinates
  - $$ x = x_0 + a_1 s + a_2 t $$
  - $$ y = y_0 + b_1 s + b_2 t $$
  - $$ z = z_0 + c_1 s + c_2 t $$
- parallelism condition of planes
  - $$ AF - BE = BG - CF = AG - CE = 0 $$
- perpendicularity condition of planes
  - $$ AE + BF + CG = 0 $$
- distance between two points:
  - $$ d = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2 + (z_1 - z_2)^2} $$
- distance from point to plane:
  - $$ d = \frac{|Ax_0 + By_0 + Cz_0 + D|}{√{A^2 + B^2 + C^2}} $$
- distance between parallel planes:
  - $$ d = |E-D| / √{A^2 + B^2 + C^2} $$
- angle between planes:
  - $$ \cos α = \frac{|AE+BF+CG|}{√{A^2 + B^2 + C^2} √{E^2 + F^2 + G^2}} $$

9.23 Straight Line
--------------------------------------------------------------------------------

- equation of straight line going through two different points:
  - $$ \frac{x-x_1}{x_2-x_1} = \frac{y-y_1}{y_2-y_1} = \frac{z-z_1}{z_2-z_1} $$
- parametric equation of straight line:
  - going through (x_0, y_0, z_0) and parallel to vector (a, b, c)
  - $$ x = x_0 + at $$
  - $$ y = y_0 + bt $$
  - $$ z = z_0 + ct $$
- equation of intersection line of two planes:
  - $$ Ax + By + Cz + D = 0 $$
  - $$ Ex + Fy + Gz + H = 0 $$
- parallelism condition of straight lines:
  - (a,b,c) and (p, q, r) are direction vectors of 2 straight lines
  - $$ aq - bp = br - cq = ar - cp = 0 $$
- perpendicularity condition of straight lines:
  - $$ ap + bq + cr = 0 $$
- angle between straight lines:
  - $$ \cos α = \frac{|ap + bq + cr|}{√(a^2+b^2+c^2) √(p^2 + q^2 + r^2)} $$
- angle between straight line and plane:
  - $$ \cos α = \frac{|Aa + Bb + Cc|}{√(a^2+b^2+c^2) √(A^2 + B^2 + C^2)} $$

9.24 Sphere
--------------------------------------------------------------------------------

- equation of sphere of center (a, b, c):
  - $$ (x-a)^2 + (y-b)^2 + (z-c)^2 = R^2 $$

--------------------------------------------------------------------------------

ref: bymath.com

EOF
