em6_analysis.md

Elementary Methematics: 6 Principles of Analysis
================================================================================

A~0e30

--------------------------------------------------------------------------------

- [6.11 Sequences, Limits of Numerical Sequences](#611-sequences-limits-of-numerical-sequences)
- [6.12 Limits of Functions](#612-limits-of-functions)
- [6.21 Derivative, Geometrical and Mechanical Meaning of Derivative](#621-derivative-geometrical-and-mechanical-meaning-of-derivative)
- [6.22 Differential and Its Relation with Derivative](#622-differential-and-its-relation-with-derivative)
- [6.23 Basic Properties of Derivatives and Differentials](#623-basic-properties-of-derivatives-and-differentials)
- [6.24 Derivatives of Elementary Functions](#624-derivatives-of-elementary-functions)
- [6.25 De L'Hospital’s Rule](#625-de-lhospitals-rule)
- [6.26 Application of Derivative in Investigation of Functions](#626-application-of-derivative-in-investigation-of-functions)
- [6.27 Convexity, Concavity and Inflexion Points of a Function](#627-convexity-concavity-and-inflexion-points-of-a-function)
- [6.31 Primitive, Indefinite Integral](#631-primitive-indefinite-integral)
- [6.32 Basic Properties of Indefinite Integral](#632-basic-properties-of-indefinite-integral)
- [6.32 Integration Methods](#632-integration-methods)
- [6.33 Some Indefinite Integrals of Elementary Functions](#633-some-indefinite-integrals-of-elementary-functions)
- [6.34 Definite Integral, Newton-Leibniz Formula](#634-definite-integral-newton-leibniz-formula)
- [6.35 Basic Properties of Definite Integral](#635-basic-properties-of-definite-integral)
- [6.36 Geometrical and Mechanical Application of Definite Integral](#636-geometrical-and-mechanical-application-of-definite-integral)
- [6.37 Some Definite Integrals](#637-some-definite-integrals)
- [6.38 Integral with Variable Upper Limit of Integration](#638-integral-with-variable-upper-limit-of-integration)

Limits
================================================================================

6.11 Sequences, Limits of Numerical Sequences
--------------------------------------------------------------------------------

- numerical sequences（数列）, general term（通项）, general term formula（通项公式）
- limit of numerical sequence
  - a number a is called a limit of a numerical sequence {u_n}:
  - $$ \underset{n \rightarrow \infty}{\lim u_n}  = a $$
  - if and only if for any $\epsilon > 0$ one can find such a number $N = N(\epsilon)$, depending on $\epsilon$, that $|u_n - a| < \epsilon$ at $n > N$
- convergent（收敛） sequence, divergent（发散） sequence
- bounded sequence, monotone sequence
- Weierstrass's theorem: each monotone and bounded sequence has a limit
- basic properties of limits (6)
- some remarkable limits
  - $$ \underset{n \rightarrow \infty}{\lim} \left( 1 + \frac{1}{n} \right)^n = e $$
  - $$ \underset{n \rightarrow \infty}{\lim} \frac{a^n}{n!} = 0, a > 0 $$
  - $$ \underset{n \rightarrow \infty}{\lim} \sqrt[n]{a} = 1, a > 0 $$
  - $$ \underset{n \rightarrow \infty}{\lim} \sqrt[n]{n} = 1 $$
  - $$ \underset{n \rightarrow \infty}{\lim} \frac{\sin 1/n}{1/n} = 1, a > 0 $$
  - $$ \underset{n \rightarrow \infty}{\lim} \frac{\tan 1/n}{1/n} = 1, a > 0 $$

6.12 Limits of Functions
--------------------------------------------------------------------------------

- limit of a function
  - a number L is called a limit of a function y = f(x) as x tends a:
  - $$ \underset{x \rightarrow a}{\lim f(x)}  = L $$
  - if and only if for any $\epsilon > 0$ one can find such a positive number $\delta = \delta(\epsilon)$, depending on $\epsilon$, that $|x - a| < \delta$ implies that $|f(x) - L| < \epsilon$
- some remarkable limits
  - $$ \underset{x \rightarrow 0}{\lim} \frac{\sin x}{x} = 1 $$
  - $$ \underset{x \rightarrow 0}{lim} \frac{\tan x}{x} = 1 $$
  - $$ \underset{x \rightarrow 0}{lim} (1+x)^{1/x} = e $$
- infinitesimal（无穷小） and infinite（无穷大） values
- finite limit, infinite limit
- infinity ($\infty$) does not mean some number, but increase unboundly

Derivative
================================================================================

6.21 Derivative, Geometrical and Mechanical Meaning of Derivative
--------------------------------------------------------------------------------

- derivative（导数） of a function y = f(x) at a point x_0:
  - $$ \underset{\Delta x \rightarrow 0}{\lim} \frac{f(x_0 + \Delta x) - f(x_0)}{\Delta x} $$
  - (limit of function increment / argument increment)
  - if limit exists, f(x) is a differentiable function（可微函数） at a point x_0, marked as
  - $$ f'(x_0) = \frac{df}{dx} (x_0) = \frac{df(x)}{dx} |_x = x_0 $$
- geometrical meaning of derivative: a derivative of a function at a point is a slope（斜率） of a tangent of this function graph at this point
- tangent equation:
  - $$ y = f(x_0) + f'(x_0) \cdot (x - x_0) $$
- mechanical meaning of derivative:
  - a derivative of a coordinate with respect to time is a instantaneous velocity
  - an acceleration is a derivative of velocity with respective to time

6.22 Differential and Its Relation with Derivative
--------------------------------------------------------------------------------

- differential（微分） of a function: is a product of a derivative and an increment of argument:
  - $$ df = f'(x_0) \cdot \Delta x $$
- geometrical meaning of a differential

6.23 Basic Properties of Derivatives and Differentials
--------------------------------------------------------------------------------

- if $u(x) ≡ const$, then $u'(x) ≡ 0, du≡ 0$
- if $u(x), v(x)$ are differentiable functions at a point x_0, then:
  - $$ (c u)' = c u', d(c u) = c du $$
  - $$ (u ± v)' = u' ± v', d(u ± v) = du ± dv $$
  - $$ (u v)' = u' v + u v', d(u v) = v du + u dv $$
  - $$ (u/v)' = \frac{u' v - u v'}{v^2}, d(u/v) = \frac{u dv - v du}{v^2}, (v(x_0) != 0) $$
- derivative of a composite function (argument of which is also a function: $h(x) = g(f(x))$)
  - if a function f has a derivative at a point x_0, and a function g has a derivative at a point f(x_0), then a composite function h has also a derivative at a point x_0, calculated by the formula:
  - $$ h'(x_0) = g'(f(x_0)) · f'(x_0) $$

6.24 Derivatives of Elementary Functions
--------------------------------------------------------------------------------

$$ (x^n)' = n x^{n-1}, (n: a natural number) $$

$$ (\sin x)' = \cos x ; (\cos x)' = -\sin x $$

$$ (\tan x)' = 1 / \cos^2 x ; (\cot x)' = -1 / \sin^2 x $$

$$ (\arcsin x)' = 1 / \sqrt{1-x^2} ; (\arccos)' = -1 / \sqrt{1-x^2} $$

$$ (\arctan x)' = 1 / (1+x^2) ; (\arcctg)' = -1 / (1+x^2) $$

$$ (a^x)' = a^x · \ln a ; (\log_a x)' = 1 / (x·\ln a) $$

$$ (x^x)' = x^x · (\ln x + 1) $$

6.25 De L'Hospital’s Rule
--------------------------------------------------------------------------------

- L'Hospital's rule:
  - let at $x → a$ for functions f(x) and g(x), differentiable in some neighborhood of point a, the conditions are executed:
    1. either $f(x) → 0, g(x) → 0$, or $f(x) → ∞, g(x) → ∞$
    2. the limit $\underset{x→a}{\lim} \frac{f'(x)}{g'(x)}$ exists,
  - then
  - $$ \underset{x→a}{\lim} \frac{f(x)}{g(x)} = \underset{x→a}{\lim} \frac{f'(x)}{g'(x)} $$
- as mathematicians say, de L'Hospital's rule permits to get rid of indeterminacies of types 0/0 and ∞/∞
- indeterminacies of other types: $∞-∞, ∞•0, 0^0, ∞^0, 1^∞$, can be transformed to either 0/0 or ∞/∞:
  1. ∞-∞ reduced to 0/0:  
     $$ f(x) - g(x) = \frac{1/g(x) - 1/f(x)}{1/[f(x)•g(x)]} $$
  2. ∞•0 reduced to 0/0 or ∞/∞:  
     $$ f(x) • g(x) = \frac{f(x)}{1/g(x)} = \frac{g(x)}{1/f(x)} $$
  3. rest are reduced to the first ones by the logarithmic transformation:  
     $$ \log f(x)^{g(x)} = g(x) • \log f(x) $$
- if after using L'Hospital's rule, 0/0 or ∞/∞ remain, repeat

6.26 Application of Derivative in Investigation of Functions
--------------------------------------------------------------------------------

- if a function is differentiable at some point, then it is a continuous function at this point; contrary is invalid
- sufficient conditions of functions monotony:
  - if f'(x) > 0 at every point of an interval (a, b), then a function f(x) increases within this interval
  - < 0 => decreases
- Darboux's theorem:
  -  points, at which a derivative of a function is equal to 0 or does not exist, divide a function domain for such intervals that within each of them a derivative saves a constant sign
- critical points:
  - a domain interior points, in which a derivative of a function is equal to zero or does not exist
- extreme（极值） (minimum（极小值）, maximum（极大值）), points of extreme
- necessary condition of extreme:
  - f'(x_0) = 0 (if derivative exists)
- sufficient conditions of extreme:
  - a derivative changes its sign from plus to minus => point of maximum
  - from minus to plus => point of minimum
- plan of function investigation: to draw a graph of a function it is necessary:
    1. to find a domain and a codomain of a function
    2. to ascertain if the function is even or odd
    3. to determine if the function is periodic or not
    4. to find zeros of the function and its values at x = 0
    5. to find intervals of a sign constancy,
    6. to find intervals of monotony
    7. to find points of extreme and values of a function in these points
    8. to analyze the behavior of a function near “special” points and at a great odulus of x

6.27 Convexity, Concavity and Inflexion Points of a Function
--------------------------------------------------------------------------------

- the second derivative f"(x)
- convex and concave function:
  - convex: in an interval (a, b), function graph is placed lower than a tangent line, going through any point (x_0, f(x_0))
  - concave: higher than tangent
- sufficient condition of concavity/convexity of a function:
  - let a function be twice defferentiable (i.e. it has the second derivative) in an interval (a, b), then:
  - if f"(x) > 0 for x ∈（a, b) => concave
  - < 0 => convex
- inflexion point:
  - at which a function changes a convexity to a concavity or vice versa
  - f"(x_0) = 0

Integral
================================================================================

6.31 Primitive, Indefinite Integral
--------------------------------------------------------------------------------

- primitive（原函数）:
  - $F'(x) = f(x)$
- finding of primitive has an infinite set of solutions
- indefinite integral（不定积分）:
  - $\int f(x)dx = F(x) + C$
  - C: constant of integration

6.32 Basic Properties of Indefinite Integral
--------------------------------------------------------------------------------

$$ \int kf(x)dx = k\int f(x)dx $$

$$ \int [f(x) + g(x)]dx = \int f(x)dx + \int g(x)dx $$

$$ \frac{d}{dx} \int f(x)dx = f(x) $$

$$ \int df(x) = f(x) + C $$

6.32 Integration Methods
--------------------------------------------------------------------------------

- integration by parts（分部积分法）:
  - $$ \int u dv = uv - \int v du $$
- integration by substitution (exchange)（换元积分法）
  - $$ \int F(x)dx = \int f[g(x)] • g'(x)dx = \int f(z)dz $$

6.33 Some Indefinite Integrals of Elementary Functions
--------------------------------------------------------------------------------

$$ \int x^{α+1}dx = \frac{x^{α+1}}{α+1} + C, (α != -1); \int \frac{dx}{x} = \ln |x| + C $$
In the last integral the integration segmenty does not contain x = 0.

Below constant C will be ignored.

$$ \int a^x dx = \frac {a^x}{\ln a} $$

$$ \int \sin x dx = -\cos x ; \int \cos x dx = \sin x $$

$$ \int \tan x dx = -\ln |\cos x| ; \int \cot x dx = \ln |\sin x| $$

$$ \int \frac{dx}{\sin^2 x} = -\cot x ; \int \frac{dx}{\cos^2 x} = \tan x $$

$$ \int \frac{dx}{x^2 + a^2} = 1/a \arctan{x/a} ; \int \frac{dx}{x^2 - a^2} = 1/2a \ln |\frac{x-a}{x+a}| , a != 0 $$

$$ \int \frac{dx}{\sqrt{a^2 - x^2}} = \arcsin{x/a} , (|x|<a) ; \int \frac{dx}{\sqrt{x^2 ± a^2}} = \ln |x + \sqrt{x^2 ± a^2}| , a != 0 $$

$$ \int \frac{dx}{\sin x} = \ln |\tan{x/2}| ; \int \frac{dx}{\cos x} = \ln |\tan(x/2 + π/4)| $$

6.34 Definite Integral, Newton-Leibniz Formula
--------------------------------------------------------------------------------

- curvilinear trapezoid（曲边梯形）
- area of a curvilinear trapezoid:
  - $S = F(b) - F(a)$
- definite integral:
  - $\int^b_a f(x)dx$
  - limits of integration (a, b)
  - integrand（被积函数）
- Newton-Leibniz formula:
  -  $$ \int^b_a f(x)dx = F(b) - F(a) $$

6.35 Basic Properties of Definite Integral
--------------------------------------------------------------------------------

$$ \int^b_a dx = b - a $$

if a <= c <= b, then
$$ \int^b_a f(x)dx = \int^c_a f(x)dx + \int^b_c f(x)dx$$

$$ \int^b_a kf(x)dx = k\int^b_a f(x)dx $$

$$ \int^b_a kf(x)dx = -\int^a_b f(x)dx $$

$$ \int^b_a [f(x) + g(x)]dx = \int^b_a f(x)dx + \int^b_a g(x)dx $$

6.36 Geometrical and Mechanical Application of Definite Integral
--------------------------------------------------------------------------------

- volume of revolution body
  - $$ V = π\int^b_a f^2(x)dx $$
- work of variable force
  - $$ A = \int^b_a f(x)dx $$

6.37 Some Definite Integrals
--------------------------------------------------------------------------------

$$ \int^{π/2}_0 \sin^2{mx}dx = \int^{π/2}_0 \cos^2{mx}dx = π/4, m=1,2... $$

$$ \int^π_0 \sin^2{mx}dx = \int^π_0 \cos^2{mx}dx = π/2, m=1,2... $$

$$ \int^{2π}_0 \sin^2{mx}dx = \int^{2π}_0 \cos^2{mx}dx = π, m=1,2... $$

$$ \int^1_0 \frac{\ln x}{x-1} dx = π^2 / 6 $$

$$ \int^∞_0 \sin{x}/x dx = π/2 $$

$$ \int^∞_0 \frac{dx}{(x+1)^2} = 1 $$

$$ \int^1_0 \ln(1/x) = 1 $$

6.38 Integral with Variable Upper Limit of Integration
--------------------------------------------------------------------------------

$$ F(x) = \int^x_a f(t) dt $$

$$ F'(x) = f(x) $$

--------------------------------------------------------------------------------

ref: bymath.com

EOF
